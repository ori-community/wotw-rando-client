#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SpellUIBindingItem {
    IL2CPP_REGISTER_METHOD(0x00944D80, void, Awake, (app::SpellUIBindingItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00944F70, void, OnDestroy, (app::SpellUIBindingItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00945170, void, OnBindingsUpdatedCallback, (app::SpellUIBindingItem * this_ptr, app::SpellInventory_Binding__Enum binding))
    IL2CPP_REGISTER_METHODINFO(0x04748A78, SpellUIBindingItem_OnBindingsUpdatedCallback__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00945180, void, OnBindingsUpdated, (app::SpellUIBindingItem * this_ptr, bool run_on_changed_action))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SpellUIBindingItem * this_ptr))
}
