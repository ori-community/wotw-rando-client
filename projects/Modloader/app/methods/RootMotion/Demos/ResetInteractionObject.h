#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/ResetInteractionObject.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::RootMotion::Demos::ResetInteractionObject {
    IL2CPP_REGISTER_METHOD(0x0222EE10, void, Start, app::ResetInteractionObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0222F0E0, void, OnPickUp, app::ResetInteractionObject* this_ptr, app::Transform* t)
    IL2CPP_REGISTER_METHOD(0x0222F2F0, app::IEnumerator*, ResetObject, app::ResetInteractionObject* this_ptr, float reset_time)
    IL2CPP_REGISTER_METHOD(0x008A2C20, void, ctor, app::ResetInteractionObject* this_ptr)
} // namespace app::classes::RootMotion::Demos::ResetInteractionObject
