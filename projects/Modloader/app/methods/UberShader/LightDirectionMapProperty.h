#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CompressedLightDirectionMap.h>
#include <Modloader/app/structs/LightDirectionMapProperty.h>

namespace app::classes::UberShader::LightDirectionMapProperty {
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::CompressedLightDirectionMap*, get_CompressedMap, (app::LightDirectionMapProperty * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018FAE90, void, set_CompressedMap, (app::LightDirectionMapProperty * this_ptr, app::CompressedLightDirectionMap* value))
    IL2CPP_REGISTER_METHOD(0x018FAEB0, bool, get_IsInitialized, (app::LightDirectionMapProperty * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, BindProperties, (app::LightDirectionMapProperty * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018FAFA0, void, ctor, (app::LightDirectionMapProperty * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018FB0F0, void, cctor, ())
} // namespace app::classes::UberShader::LightDirectionMapProperty
