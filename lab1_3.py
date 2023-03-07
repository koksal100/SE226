name=input("What is your name:\n")

lab_grade=input("Dear "+name+", please enter your lab grade\n")
midterm_grade=input("Dear "+name+", please enter your midterm grade\n")
final_grade=input("Dear "+name+", please enter your final grade\n")
last_score=int(lab_grade)*0.25+int(midterm_grade)*0.35+int(final_grade)*0.40

print("Name:"+name+"\nLab:"+lab_grade+"\nMidterm:"+midterm_grade+"\nFinal:"+final_grade+"\nLast score:",last_score)