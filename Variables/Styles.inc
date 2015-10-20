; Stylesheet for the LeagueSearch Rainmeter Skin.
; Author=dlu


; Note: Only Meters may have styles, not measures.

; Settings:
; 
; [styleName]
; FontFace=#fontface1# |(string value)
; FontColor=0,0,0,255 |(color values, rgb or hex)
; FontSize=10
; StringStyle=Normal |Bold|Italic|BoldItalic
; StringAlign=Left |Right|Center|LeftBottom|RightBottom|CenterBottom|LeftCenter|RightCenter|CenterCenter
; StringCase=None |Upper|Lower|Proper
; StringEffect=None |Shadow|Border
; FontEffectColor=0,0,0,255 |RRR,GGG,BBB,AAA|RRGGBBAA (rgb|hex) (Alpha Note: 0 = invisible, 255 = opaque)
; ClipString=0 |1|2 (0=disabled | 1=enabled | 2=auto)
; 
; Angle=1.4 (angle of text in radians)
; Padding=2,4,2,4 (Left,Top,Right,Bottom)
; Hidden=1 (1 = hidden | 0 = shown)
; BevelType=0 (0=no bevel | 1=raised | 2=sunken)
; AntiAlias=1 (0 = none | 1 = edge smoothing)
; Group=groupname (defines a group this meter belongs to) (...or measure?)


; -------------------------------------------------------------------------------------------------
; ---------------------------------- Displaying Summoners' Infos ----------------------------------

[summNames]
FontFace=#fontface1#
FontColor=#cWhite#
FontSize=9
StringStyle=Bold
StringAlign=Left
StringCase=None
StringEffect=Shadow
FontEffectColor=#cW_Sdw#
ClipString=0
AntiAlias=1
Group=#gNames#

[rankDiv]
FontFace=#fontface1#
FontColor=#cdWhite#
FontSize=8
StringStyle=Italic
StringAlign=Left
StringCase=None
StringEffect=None
FontEffectColor=#cW_Sdw#
ClipString=0
AntiAlias=1
Group=#gRnkDiv#

[otherInfo]
FontFace=#fontface1#
FontColor=#cLGray#
FontSize=8
StringStyle=Normal
StringAlign=Left
StringCase=None
StringEffect=None
FontEffectColor=#cW_Sdw#
ClipString=0
AntiAlias=1
Group=#gOtherInfo#


[input]
FontFace=#fontface1#
FontColor=#cWhite#
FontSize=10
StringStyle=Normal
StringAlign=LeftCenter
StringCase=None
StringEffect=None
FontEffectColor=#cW_Sdw#
ClipString=0
AntiAlias=1

