#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ControlListGridController.h>

namespace app::classes::ControlListGridController {
    IL2CPP_REGISTER_METHOD(0x011EE200, void, Awake, app::ControlListGridController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011EE5D0, void, OnItemPressed, app::ControlListGridController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDisable, app::ControlListGridController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, FixedUpdate, app::ControlListGridController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011EE5E0, void, CycleList, app::ControlListGridController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::ControlListGridController* this_ptr)
} // namespace app::classes::ControlListGridController
