#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::OutputFolder {
    IL2CPP_REGISTER_METHOD(0x00441710, app::String *, get_AppData, ())
    IL2CPP_REGISTER_METHOD(0x00441A50, app::String *, get_PlayerDataFolderPath, ())
    IL2CPP_REGISTER_METHOD(0x00441CE0, app::String *, get_PlayerTrialDataFolderPath, ())
    IL2CPP_REGISTER_METHOD(0x00441EE0, app::String *, get_OutputPathNonHost, ())
    IL2CPP_REGISTER_METHOD(0x00441FF0, app::String *, get_BuildOutputPath, ())
    IL2CPP_REGISTER_METHOD(0x00442250, void, ResetBuildOutputPath, ())
    IL2CPP_REGISTER_METHOD(0x004422F0, void, cctor, ())
}
