@echo off
title calculator
color fc
:top
echo welcome!
echo type your math problem below
echo -------
echo addition :+
echo substraction :-
echo divission :/
echo multiplication :*

echo.
set /p sum=
set/a ans=%sum%
echo.
echo= %ans%
echo -------
pause
cls
echo previous answer: %ans%
go to top
pause
exit

