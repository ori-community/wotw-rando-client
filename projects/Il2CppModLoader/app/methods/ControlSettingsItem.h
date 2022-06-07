#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ControlSettingsItem {
    IL2CPP_REGISTER_METHOD(0x011F05A0, void, Awake, (app::ControlSettingsItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011F06A0, void, SetItemContext, (app::ControlSettingsItem * this_ptr, app::Object * context, app::Object * grid_context))
    IL2CPP_REGISTER_METHOD(0x011F07D0, void, OnItemContextDirty, (app::ControlSettingsItem * this_ptr, app::Object * grid_context))
    IL2CPP_REGISTER_METHOD(0x007FB020, void, OnPressed, (app::ControlSettingsItem * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476A010, ControlSettingsItem_OnPressed__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnHighlighted, (app::ControlSettingsItem * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04719478, ControlSettingsItem_OnHighlighted__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnUnhighlighted, (app::ControlSettingsItem * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471E690, ControlSettingsItem_OnUnhighlighted__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ControlSettingsItem * this_ptr))
}
