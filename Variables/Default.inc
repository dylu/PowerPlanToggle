; Default loaded file for the LeagueSearch rainmeter skin.
; Handles Fonts and Colors.
; Author=dlu

[Variables]

; ------ Search Box Positon ------
searchX=10
searchY=10
searchTextX=(#searchX# + 36)
searchTextY=(#searchY# + 6)

; ------------- URLs -------------
IMGS=#SKINSPATH#LeagueSearch\Variables\Images\
this=LeagueSearch\Lookup
this.search=#this#\LoLSearch.ini
this.display=#this#\LoLDisplay.ini
rain.search=#SKINSPATH#\#this.search#
rain.display=#SKINSPATH#\#this.display#

; ---------- Font Faces ----------
fontface1=Code Light
fontface2=Code Bold
fontface3=ITC Avant Garde Pro Md

; ------------ Colors ------------
cdBlack=0,0,0,245
cBlack=0,0,0,255
cdWhite=255,255,255,245
cWhite=255,255,255,255
cLGray=220,220,220,245
cW_Sdw=10,10,10,255

; Temporary Colors to play around with.  //Borrowed from Encoded Rainmeter Suite.
Color1=128,128,128,255
Color2=255,255,255,230
Color3=128,128,128,100
Color4=186,55,51,200
Color5=0,0,0,210
Color6=255,255,255,255
Color7=204,0,0,255
Color8=162,18,43,255

; ------------ Groups ------------
gNames=Group_Summoner-Names
gRnkDiv=Group_Rank-Division
gOtherInfo=Group_Other-Information