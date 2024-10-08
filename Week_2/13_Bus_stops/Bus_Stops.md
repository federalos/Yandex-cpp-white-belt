# Автобусные остановки

Реализуйте систему хранения автобусных маршрутов. Вам нужно обрабатывать следующие запросы:

- **NEW_BUS** _**bus stop_count stop1 stop2**_ **...** — добавить маршрут автобуса с названием _**bus**_ и _**stop_count**_ остановками с названиями _**stop1**_, _**stop2**_, ...
- **BUSES_FOR_STOP** _**stop**_ — вывести названия всех маршрутов автобуса, проходящих через остановку _**stop**_.
- **STOPS_FOR_BUS** _**bus**_ — вывести названия всех остановок маршрута _**bus**_ со списком автобусов, на которые можно пересесть на каждой из остановок.
- **ALL_BUSES** — вывести список всех маршрутов с остановками.
## Формат ввода
В первой строке ввода содержится количество запросов _Q_, затем в _Q_ строках следуют описания запросов.

Гарантируется, что все названия маршрутов и остановок состоят лишь из латинских букв, цифр и знаков подчёркивания.

Для каждого запроса **NEW_BUS** _**bus stop_count stop1**_ _**stop2**_ **...** гарантируется, что маршрут _**bus**_ отсутствует, количество остановок больше 0, а после числа _**stop_count**_ следует именно такое количество названий остановок, причём все названия в каждом списке различны.
## Формат вывода
Для каждого запроса, кроме **NEW_BUS**, выведите соответствующий ответ на него:

- На запрос **BUSES_FOR_STOP** _**stop**_ выведите через пробел список автобусов, проезжающих через эту остановку, в том порядке, в котором они создавались командами **NEW_BUS**. Если остановка _**stop**_ не существует, выведите **No stop**.
- На запрос **STOPS_FOR_BUS** _**bus**_ выведите описания остановок маршрута _**bus**_ в отдельных строках в том порядке, в котором они были заданы в соответствующей команде **NEW_BUS**. Описание каждой остановки _**stop**_ должно иметь вид **Stop** _**stop**_**:** _**bus1**_ _**bus2**_ **...**, где _**bus1 bus2**_ **...** — список автобусов, проезжающих через остановку _**stop**_, в порядке, в котором они создавались командами **NEW_BUS**, за исключением исходного маршрута _**bus**_. Если через остановку _**stop**_ не проезжает ни один автобус, кроме _**bus**_, вместо списка автобусов для неё выведите **no interchange**. Если маршрут _**bus**_ не существует, выведите **No bus**.
- На запрос **ALL_BUSES** выведите описания всех автобусов в алфавитном порядке. Описание каждого маршрута _**bus**_ должно иметь вид **Bus** _**bus**_**:** _**stop1 stop2**_ **...**, где _**stop1 stop2**_ **...** — список остановок автобуса _**bus**_ в порядке, в котором они были заданы в соответствующей команде **NEW_BUS**. Если автобусы отсутствуют, выведите **No buses**.
## Предупреждение
Условие задачи выше содержит много важных деталей. Если вы не уверены в том, что не упустили ни одной, перечитайте условие ещё раз.
## Пример
### Ввод
```
10
ALL_BUSES
BUSES_FOR_STOP Marushkino
STOPS_FOR_BUS 32K
NEW_BUS 32 3 Tolstopaltsevo Marushkino Vnukovo
NEW_BUS 32K 6 Tolstopaltsevo Marushkino Vnukovo Peredelkino Solntsevo Skolkovo
BUSES_FOR_STOP Vnukovo
NEW_BUS 950 6 Kokoshkino Marushkino Vnukovo Peredelkino Solntsevo Troparyovo
NEW_BUS 272 4 Vnukovo Moskovsky Rumyantsevo Troparyovo
STOPS_FOR_BUS 272
ALL_BUSES
```
### Вывод
```
No buses
No stop
No bus
32 32K
Stop Vnukovo: 32 32K 950
Stop Moskovsky: no interchange
Stop Rumyantsevo: no interchange
Stop Troparyovo: 950
Bus 272: Vnukovo Moskovsky Rumyantsevo Troparyovo
Bus 32: Tolstopaltsevo Marushkino Vnukovo
Bus 32K: Tolstopaltsevo Marushkino Vnukovo Peredelkino Solntsevo Skolkovo
Bus 950: Kokoshkino Marushkino Vnukovo Peredelkino Solntsevo Troparyovo
```

### Ввод
```
6
ALL_BUSES
NEW_BUS 32 3 Tolstopaltsevo Marushkino Vnukovo
NEW_BUS 32K 6 Tolstopaltsevo Marushkino Vnukovo Peredelkino Solntsevo Skolkovo
NEW_BUS 950 6 Kokoshkino Marushkino Vnukovo Peredelkino Solntsevo Troparyovo
NEW_BUS 272 4 Vnukovo Moskovsky Rumyantsevo Troparyovo
ALL_BUSES
```
### Вывод
```
No buses
32 32K
Bus 272: Vnukovo Moskovsky Rumyantsevo Troparyovo
Bus 32: Tolstopaltsevo Marushkino Vnukovo
Bus 32K: Tolstopaltsevo Marushkino Vnukovo Peredelkino Solntsevo Skolkovo
Bus 950: Kokoshkino Marushkino Vnukovo Peredelkino Solntsevo Troparyovo
```