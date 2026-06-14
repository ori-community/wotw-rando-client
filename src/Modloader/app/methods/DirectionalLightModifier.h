#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DirectionalLightModifier.h>

namespace app::classes::DirectionalLightModifier {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ApplyMultipliers, app::DirectionalLightModifier* this_ptr, float strength, float speed)
    IL2CPP_REGISTER_METHOD(0x00B93F80, void, SetProperties, app::DirectionalLightModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B941D0, void, ctor, app::DirectionalLightModifier* this_ptr)
} // namespace app::classes::DirectionalLightModifier
