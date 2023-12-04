mkdir script_exercise 
echo "directory script_exercise created successfully"
cd script_exercise
for c in 1 2 3 4 5; do 
touch file_$c.txt
echo "file_$c in directory script_exercise created successfully"
echo "$(date)" >file_$c.txt
cat  file_$c.txt
echo "date printed_succssfully"
done

