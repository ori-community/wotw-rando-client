#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpaceAttribute.h>

namespace app::classes::UnityEngine::SpaceAttribute {
    IL2CPP_REGISTER_METHOD(0x02C60CB0, void, ctor_1, app::SpaceAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C87C0, void, ctor_2, app::SpaceAttribute* this_ptr, float height)
} // namespace app::classes::UnityEngine::SpaceAttribute
