#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PickUp2Handed.h>
#include <Modloader/app/structs/FullBodyBipedEffector__Enum.h>
#include <Modloader/app/structs/InteractionObject.h>

namespace app::classes::RootMotion::Demos::PickUp2Handed {
    IL2CPP_REGISTER_METHOD(0x0222B500, void, OnGUI, (app::PickUp2Handed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0222B6D0, void, Start, (app::PickUp2Handed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0222BAD0, void, OnPause, (app::PickUp2Handed * this_ptr, app::FullBodyBipedEffector__Enum effector_type, app::InteractionObject* interaction_object))
    IL2CPP_REGISTER_METHOD(0x0222BD80, void, OnStart, (app::PickUp2Handed * this_ptr, app::FullBodyBipedEffector__Enum effector_type, app::InteractionObject* interaction_object))
    IL2CPP_REGISTER_METHOD(0x0222BF40, void, OnDrop, (app::PickUp2Handed * this_ptr, app::FullBodyBipedEffector__Enum effector_type, app::InteractionObject* interaction_object))
    IL2CPP_REGISTER_METHOD(0x0222C0D0, void, LateUpdate, (app::PickUp2Handed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0222C5D0, bool, get_holding, (app::PickUp2Handed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0222C600, void, OnDestroy, (app::PickUp2Handed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0222CA30, void, ctor, (app::PickUp2Handed * this_ptr))
} // namespace app::classes::RootMotion::Demos::PickUp2Handed
