#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DarkeningModifier.h>

namespace app::classes::DarkeningModifier {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ApplyMultipliers, app::DarkeningModifier* this_ptr, float strength, float speed)
    IL2CPP_REGISTER_METHOD(0x00DCBA40, void, SetProperties, app::DarkeningModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DCBB00, void, ctor, app::DarkeningModifier* this_ptr)
} // namespace app::classes::DarkeningModifier
