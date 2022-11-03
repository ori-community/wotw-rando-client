#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ControlSchemeGridController {
    IL2CPP_REGISTER_METHOD(0x011EF7C0, void, Awake, (app::ControlSchemeGridController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011EF7D0, void, SetGrid, (app::ControlSchemeGridController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011EFC40, void, SetControlScheme, (app::ControlSchemeGridController * this_ptr, app::ControlScheme__Enum scheme))
    IL2CPP_REGISTER_METHOD(0x011EFD20, void, OnItemPressed, (app::ControlSchemeGridController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04764818, ControlSchemeGridController_OnItemPressed__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x011EF7C0, void, OnEnable, (app::ControlSchemeGridController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDisable, (app::ControlSchemeGridController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, FixedUpdate, (app::ControlSchemeGridController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011EFDE0, void, CycleList, (app::ControlSchemeGridController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ControlSchemeGridController * this_ptr))
} // namespace app::classes::ControlSchemeGridController
