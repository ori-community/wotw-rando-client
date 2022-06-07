#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ToggleMenuAction {
    IL2CPP_REGISTER_METHOD(0x00AFC900, bool, get_IsToggleOn, (app::ToggleMenuAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AFCA20, void, Awake, (app::ToggleMenuAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AFCB70, void, OnEnable, (app::ToggleMenuAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AFCEB0, void, OnDisable, (app::ToggleMenuAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AFD1E0, void, Perform, (app::ToggleMenuAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00AFD200, void, SetSlidersColors, (app::ToggleMenuAction * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047222A8, ToggleMenuAction_SetSlidersColors__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00AFD3B0, void, SetCleverMenuItemsColors, (app::ToggleMenuAction * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04702D38, ToggleMenuAction_SetCleverMenuItemsColors__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::ToggleMenuAction * this_ptr))
}
