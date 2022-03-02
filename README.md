# Drupal 7.0 Broadcast Media

Drupal 7.0 Broadcast Media Modules and Theme template to display API metadata

__Note This is coming to EOL support to be replaced with generic API embed code maintaing and increasing these plugins' functionality. HELP WANTED if anyone wishes to take over or maintain this repo for DRUPAL 8.0

## API Bridge

Enter the url of OBServer, API User, Player ID and Password

Main page default schedule content view ties into API showing times/dates/name of PL and PL Description.

## Media

Takes the media info and displays this in Blocks on Drupal site, Recent Uploads, Newest Podcasts, etc

## Player

Enter in the URL of audio stream, Station Name and a Logo to display in pop up HTML5 player

## Schedule

This module, takes schedule info from OBServer and dynamically displays the Show\PL Name and Description, start and stop times automatically on Front Page of Drupal site.

Create a new "Program" in Drupal and name it exactly the same as the name of the Show from OBServer and the info and graphic will automatically be associated.

User Group Permissions

Host - Add, Update and Delete Program Content.

Content Manager - Add users and assign them to groups. Modify and Delete Programs

## Program Info

>Content>Add New Content>Program. Program name __MUST BE IDENTICAL__ to the Show\PL name on media server. When both are identical, they become associated so that when an adjustment is done on scheduler they info will sync with the program. Look at examples.

Server PL Name Schedule Name PL Description Schedule Tagline

Drupal Content Program Name Schedule Body Text Program Description Appears in Program Text 
