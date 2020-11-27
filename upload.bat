chcp 65001
::添加到暂存区
git add .
::第一次提交
git commit -m "第四章part1"
::同步远程仓库
git pull origin Chapter4:master --allow-unrelated-histories
::推送本地分支到远程
git push -u origin master:Chapter4
