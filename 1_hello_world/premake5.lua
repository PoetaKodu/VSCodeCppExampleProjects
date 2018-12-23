project "1_hello_world"
	kind "ConsoleApp"
	language "C++"
	cppdialect "C++11"
	
	-- "workspaceFolder" is defined in ../premake5.lua
	-- Place build files in workspaceFolder/build/projectName
	location ( path.join( workspaceFolder, "build/%{prj.name}") )
	-- Place binary files in workspaceFolder/bin/platformName/configurationName
	targetdir ( path.join( workspaceFolder, "bin/%{cfg.platform}/%{cfg.buildcfg}") )

	files {
		"src/Main.cpp"
	}
