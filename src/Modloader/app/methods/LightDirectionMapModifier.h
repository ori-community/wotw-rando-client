#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LightDirectionMapModifier.h>

namespace app::classes::LightDirectionMapModifier {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ApplyMultipliers, app::LightDirectionMapModifier* this_ptr, float strength, float speed)
    IL2CPP_REGISTER_METHOD(0x0114C930, void, SetProperties, app::LightDirectionMapModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0114CA20, void, ctor, app::LightDirectionMapModifier* this_ptr)
} // namespace app::classes::LightDirectionMapModifier
