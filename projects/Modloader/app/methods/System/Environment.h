#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EnvironmentVariableTarget__Enum.h>
#include <Modloader/app/structs/Environment_SpecialFolderOption__Enum.h>
#include <Modloader/app/structs/Environment_SpecialFolder__Enum.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/IDictionary.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/OperatingSystem.h>
#include <Modloader/app/structs/PlatformID__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/Version.h>

namespace app::classes::System::Environment {
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::String*, GetResourceString_1, app::String* key)
    IL2CPP_REGISTER_METHOD(0x01A18770, app::String*, GetResourceString_2, app::String* key, app::Object__Array* values)
    IL2CPP_REGISTER_METHOD(0x01A18830, app::String*, GetResourceStringEncodingName, int32_t code_page)
    IL2CPP_REGISTER_METHOD(0x01A18980, app::String*, get_CurrentDirectory, )
    IL2CPP_REGISTER_METHOD(0x01A18990, int32_t, get_CurrentManagedThreadId, )
    IL2CPP_REGISTER_METHOD(0x01A189E0, bool, get_HasShutdownStarted, )
    IL2CPP_REGISTER_METHOD(0x01A189F0, app::String*, get_MachineName, )
    IL2CPP_REGISTER_METHOD(0x01A18A00, app::String*, GetNewLine, )
    IL2CPP_REGISTER_METHOD(0x01A18A20, app::String*, get_NewLine, )
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::PlatformID__Enum, get_Platform, )
    IL2CPP_REGISTER_METHOD(0x01A18AE0, app::String*, GetOSVersionString, )
    IL2CPP_REGISTER_METHOD(0x01A18C10, app::OperatingSystem*, get_OSVersion, )
    IL2CPP_REGISTER_METHOD(0x01A18ED0, app::Version*, CreateVersionFromString, app::String* info)
    IL2CPP_REGISTER_METHOD(0x01A19280, app::String*, get_StackTrace, )
    IL2CPP_REGISTER_METHOD(0x01A193E0, int32_t, get_TickCount, )
    IL2CPP_REGISTER_METHOD(0x01A189F0, app::String*, get_UserDomainName, )
    IL2CPP_REGISTER_METHOD(0x01A19420, app::String*, get_UserName, )
    IL2CPP_REGISTER_METHOD(0x01A19430, void, Exit, int32_t exit_code)
    IL2CPP_REGISTER_METHOD(0x01A19440, app::String*, ExpandEnvironmentVariables, app::String* name)
    IL2CPP_REGISTER_METHOD(0x013DD080, app::String__Array*, GetCommandLineArgs, )
    IL2CPP_REGISTER_METHOD(0x01A19810, app::String*, internalGetEnvironmentVariable_native, void* variable)
    IL2CPP_REGISTER_METHOD(0x01A19960, app::String*, internalGetEnvironmentVariable, app::String* variable)
    IL2CPP_REGISTER_METHOD(0x01A19C20, app::String*, GetEnvironmentVariable, app::String* variable)
    IL2CPP_REGISTER_METHOD(0x01A19C30, app::Hashtable*, GetEnvironmentVariablesNoCase, )
    IL2CPP_REGISTER_METHOD(0x01A19E30, app::IDictionary*, GetEnvironmentVariables, )
    IL2CPP_REGISTER_METHOD(0x01A19FF0, app::String*, GetFolderPath_1, app::Environment_SpecialFolder__Enum folder)
    IL2CPP_REGISTER_METHOD(0x01A1A000, app::String*, GetWindowsFolderPath, int32_t folder)
    IL2CPP_REGISTER_METHOD(
        0x01A19FF0,
        app::String*,
        GetFolderPath_2,
        app::Environment_SpecialFolder__Enum folder,
        app::Environment_SpecialFolderOption__Enum option
    )
    IL2CPP_REGISTER_METHOD(0x01A1A010, app::String*, ReadXdgUserDir, app::String* config_dir, app::String* home_dir, app::String* key, app::String* fallback)
    IL2CPP_REGISTER_METHOD(
        0x01A1A4D0,
        app::String*,
        UnixGetFolderPath,
        app::Environment_SpecialFolder__Enum folder,
        app::Environment_SpecialFolderOption__Enum option
    )
    IL2CPP_REGISTER_METHOD(0x01A1A8B0, void, SetEnvironmentVariable_1, app::String* variable, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01A1AA90, void, SetEnvironmentVariable_2, app::String* variable, app::String* value, app::EnvironmentVariableTarget__Enum target)
    IL2CPP_REGISTER_METHOD(0x01A1AAA0, void, InternalSetEnvironmentVariable, app::String* variable, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01A1AAB0, void, FailFast_1, app::String* message)
    IL2CPP_REGISTER_METHOD(0x01A1AB00, void, FailFast_2, app::String* message, app::Exception* exception)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_Is64BitProcess, )
    IL2CPP_REGISTER_METHOD(0x01A1AB60, int32_t, get_ProcessorCount, )
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsRunningOnWindows, )
    IL2CPP_REGISTER_METHOD(0x01A1AB80, app::String__Array*, GetEnvironmentVariableNames, )
    IL2CPP_REGISTER_METHOD(0x01A1AB90, app::String*, GetMachineConfigPath, )
    IL2CPP_REGISTER_METHOD(0x01A1ABA0, app::String*, internalGetHome, )
    IL2CPP_REGISTER_METHOD(0x0139C650, int32_t, GetPageSize, )
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsUnix, )
    IL2CPP_REGISTER_METHOD(0x01A1AC30, app::String*, GetStackTrace, app::Exception* e, bool need_file_info)
} // namespace app::classes::System::Environment
