#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UberShaderAreaNameFinder {
    IL2CPP_REGISTER_METHOD(0x01908630, app::String*, GetAreaImplString, (app::UberAtlasArea__Enum area))
    IL2CPP_REGISTER_METHOD(0x01908700, app::String*, GetAreaName_1, (app::String * name))
    IL2CPP_REGISTER_METHOD(0x01908AA0, app::String*, GetAreaName_2, (app::Transform * root))
    IL2CPP_REGISTER_METHOD(0x01908B90, app::String*, MassageAreaName, (app::String * area_name))
    IL2CPP_REGISTER_METHOD(0x01909110, void, cctor, ())
} // namespace app::classes::UberShaderAreaNameFinder
