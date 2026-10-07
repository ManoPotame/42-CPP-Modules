#include <iostream>
#include <fstream>

int	main(int ac, char **av)
{
	std::string	filename;
	std::string	s1;
	std::string	s2;
	std::string	buf;

	if (ac < 4)
		return 1;
	filename = av[1];
	s1 = av[2];
	s2 = av[3];
	std::ifstream inputStream(filename);
	if (!inputStream.is_open())
	{
		std::cerr << "Cannot open the filename !";
		return 1;
	}
	std::ofstream repFile (filename+".replace");
	if (!repFile)
		return 1;
	while (std::getline(inputStream, buf))
	{
		// if (s1[0] == s2[0]) //TODO this condition cannot work...
		// 	repFile << buf << std::endl;
		//else
		{
			size_t i = buf.find(s1);
			while (i != std::string::npos)
			{
				buf.erase(i, s1.length());
				buf.insert(i, s2);
				i = buf.find(s1);
			}
			repFile << buf << std::endl;
		}
	}
	return 0;
}
