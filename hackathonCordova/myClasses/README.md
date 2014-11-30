---------------------------------------------------

#CordovaHackathon 2014, November Edition

COMPELab - Mobile & Pervasive Computing Laboratory

Federal University of Alagoas (UFAL)

Institute of Computing (IC)

---------------------------------------------------

# Members of the Project
1. Bruno Belo
2. Caio Barbosa
3. Durval Pereira
4. Italo Oliveira

# Software Engineering
- Which functions does the app have?
  - Shows if a class will happen in the current day.
  - Shows what is going on in a select class.
  - Shows attached images/video too (picture of the board / lecture of the professor).

- How many pages will the app have?

  - PAGE 1 - INITIAL PAGE/LIST OF COURSES AND CLASSES
    - The user enters the app and see the list of courses available.
    - The user will select a course $COURSE and see the CLASSES listed of $COURSE.
      - These classes will be listed by semester.
    - The user will checkbox a class and another page will open.

  - PAGE 2 - UPLOAD CLASS STATUS
    - User update
      - The user'll be able to update the status of a class, prompting the subject that is being lectured.
      - The user also will be able to attach some picture/video of a course subject.
    - Professor update
      - Checkbox if a class will happen.
      - Yes or No.
      - Can justify the reason if the 'No' option is selected.

  - PAGE 3 - ADDITIONAL INFORMATIONS
    - About the project.
    - Who we are.
    - Contact us.

# Plugins
  - org.apache.cordova.camera
    - Attachs camera pictures
    - Attachs galery pictures
  - org.apache.cordova.statusbar
    - Class beginning alert
    - Class status update alert
    - Files attached alert
