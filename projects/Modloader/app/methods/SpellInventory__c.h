#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SpellInventory___c {
    IL2CPP_REGISTER_METHOD(0x00942ED0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SpellInventory_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__43_0, (app::SpellInventory_c * this_ptr, app::PlayerUberStateInventory_InventoryItem* _p0_))
    IL2CPP_REGISTER_METHODINFO(0x04736440, SpellInventory_c___ctor_b__43_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__43_1, (app::SpellInventory_c * this_ptr, app::SpellInventory_Binding__Enum _p0_))
    IL2CPP_REGISTER_METHODINFO(0x04709DF8, SpellInventory_c___ctor_b__43_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__43_2, (app::SpellInventory_c * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04710A98, SpellInventory_c___ctor_b__43_2__MethodInfo)
} // namespace app::classes::SpellInventory___c
