1) создание репозитория
2) git clone в vscode
3) создание файлов и добавление симейк файлов
4) mkdir build / cd build /cmake .. / cmake --build .
5) собралось,cd ../ cd bin.dbg , запустила экзешник, работает
6) cd .. / git add./ git commit -m""/git push, появилось в гите
7) сделала новую ветку: git branch feature-utils/git checkout feature-utils
8) добавление умножения в utils
9) git add./git commit -m ""/git push -u origin feature-utils
10) обратрно в главную ветку: git checkout main
11) добавляем в main.cpp
12) git add ./git  commit -m ""/git push origin main
13) слияние: git merge feature-utils, разрешение конфликтов (долго было и тяжко), git add ./git commit -m ""/git push --all origin 
