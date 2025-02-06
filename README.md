# Blitz3D TSS

> [!Important]
> For upgrading from v1.134 to v1.135, you have to read [this instruction](FMOD2SOLOUD.md).
>
> Graphics 800,600,32,2
>
> run% = 1
>
>  While run
>
>      InitEvent()
>
>      If(QuitEvent) Then
>
>        run = 0
>
>      End If
>
>      Cls 255,0,0
>
>      Present
>
>  Wend
>
>  The above example creates a red window
>

This is a **fork** of [Blitz3D TSS](https://github.com/Saalvage/Blitz3D), made by [ZiYueCommentary](https://github.com/ZiYueCommentary/Blitz3D).

中文社区：https://forum.ziyuesinicization.site/t/blitz3d-tss

## Extending Blitz3D TSS
Please read [this document](EXTENDING.md).

## How to Build

### Prepare

- Visual Studio Community 2022
  - Desktop development with C++
  - C++ MFC for latest v142 build tools (x86 & x64)
  - C++ ATL for latest v142 build tools (x86 & x64)
  - ASP.NET and web development

### Steps

1. Open `blitz3d.sln` in Visual Studio 2022.
2. Select Release or Debug config and rebuild the entire solution.
3. All done! You can find output files in the `_release` and `_release/bin` dirs. Feel free to delete `.pdb` and `.ilk` files here.

## In memory of Mark Sibly
[Mark Sibly](https://github.com/blitz-research), the author of Blitz3D, died on 12 December 2024. 🕯️