#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::BaseZone {
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_IsSuspended, (app::BaseZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00447370, void, set_IsSuspended, (app::BaseZone * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x003FC830, app::SuspendableMask__Enum, get_Mask, (app::BaseZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F8C680, void, set_Mask, (app::BaseZone * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x0043D9A0, app::SelectableCategory__Enum, get_Category, (app::BaseZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldSerialize, (app::BaseZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F8C730, app::Transform*, get_Transform, (app::BaseZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00597B10, app::UpdateType__Enum, get_UpdateType, (app::BaseZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldUpdateWhileDisabled, (app::BaseZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F8C7F0, void, Awake, (app::BaseZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F8C8A0, void, OnDestroy, (app::BaseZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F8C950, void, OnEnable, (app::BaseZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F8CA10, void, OnDisable, (app::BaseZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, AwakeInternal, (app::BaseZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DestroyInternal, (app::BaseZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnableEditor, (app::BaseZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDisableEditor, (app::BaseZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EditorUpdate, (app::BaseZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F8CAD0, void, OnUpdate, (app::BaseZone * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x00F8CB50, bool, ShouldTriggerZoneChange, (app::BaseZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F8CBC0, void, OnZoneChange, (app::BaseZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Serialize, (app::BaseZone * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x0043BB90, void, ctor, (app::BaseZone * this_ptr))
} // namespace app::classes::BaseZone
