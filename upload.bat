chcp 65001
::添加到暂存区
git add .
::第一次提交
git commit -m "练习"
::同步远程仓库
git pull origin Chapter9:master --allow-unrelated-histories
::推送本地分支到远程
git push -f origin master:Chapter9
