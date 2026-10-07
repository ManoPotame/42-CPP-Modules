#include "Account.hpp"
#include <iostream>
#include <ctime>


	int	Account::_nbAccounts = 0;
	int	Account::_totalAmount = 0;
	int	Account::_totalNbDeposits = 0;
	int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_amount = initial_deposit;
	_totalAmount += _amount;
	_nbDeposits = 0;
	_accountIndex = _nbAccounts;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:";
	std::cout << _accountIndex;
	std::cout << ";amount:";
	std::cout << initial_deposit;
	std::cout << ";created" << std::endl;
	_nbAccounts++;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:";
	std::cout << _accountIndex;
	std::cout << ";amount:";
	std::cout << _amount;
	std::cout << ";closed" << std::endl;
}

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::_displayTimestamp()
{

	time_t timestamp;
	std::time(&timestamp);
	struct tm time = *localtime(&timestamp);

	std::cout << "[";
	std::cout << time.tm_year + 1900;
	if (time.tm_mon + 1 < 10)
		std::cout << "0";
	std::cout << time.tm_mon + 1;
	if (time.tm_mday < 10)
		std::cout << "0";
	std::cout << time.tm_mday;
	std::cout << "_";
	if (time.tm_hour < 10)
		std::cout << "0";
	std::cout << time.tm_hour;
	if (time.tm_min < 10)
		std::cout << "0";
	std::cout << time.tm_min;
	if (time.tm_sec < 10)
		std::cout << "0";
	std::cout << time.tm_sec;
	std::cout << "] ";
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:";
	std::cout << getNbAccounts();
	std::cout << ";total:";
	std::cout << getTotalAmount();
	std::cout << ";deposit:";
	std::cout << getNbDeposits();
	std::cout << ";withdrawals:";
	std::cout << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	if (deposit < 0)
		return ;
	_nbDeposits++;
	_totalNbDeposits++;

	_displayTimestamp();
	std::cout << "index:";
	std::cout << _accountIndex;
	std::cout << ";p_amount:";
	std::cout << _amount;
	std::cout << ";deposit:";
	std::cout << deposit;
	std::cout << ";amount:";
	std::cout << _amount + deposit;
	std::cout << ";nb_deposits:";
	std::cout << _nbDeposits << std::endl;
	_totalAmount += deposit;
	_amount += deposit;
}
bool	Account::makeWithdrawal( int withdrawal )
{
	if (withdrawal < 0)
		return (false);
	_displayTimestamp();
	std::cout << "index:";
	std::cout << _accountIndex;
	std::cout << ";p_amount:";
	std::cout << _amount;
	std::cout << ";withdrawal:";
	if (withdrawal > _amount)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	std::cout << withdrawal;
	std::cout << ";amount:";
	std::cout << _amount - withdrawal;
	std::cout << ";nb_withdrawals:";
	std::cout << _nbWithdrawals + 1 << std::endl;
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	return (true);
}
int		Account::checkAmount( void ) const {
	return (1);
}
void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:";
	std::cout << _accountIndex;
	std::cout << ";amount:";
	std::cout << _amount;
	std::cout << ";deposit:";
	std::cout << _nbDeposits;
	std::cout << ";withdrawals:";
	std::cout << _nbWithdrawals << std::endl;
}
