#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_Moon_ISuspendable_System_Int32_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_Moon_ISuspendable_System_Int32_.h>
#include <Modloader/app/structs/ISuspendable.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_ISuspendable_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_Moon_ISuspendable_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_Moon_ISuspendable_System_Int32_ * this_ptr, app::ISuspendable* key))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_Moon_ISuspendable_System_Int32_ * this_ptr, app::ISuspendable* key, int32_t value))
    IL2CPP_REGISTER_METHOD(0x02BCDB30, bool, Remove, (app::Dictionary_2_Moon_ISuspendable_System_Int32_ * this_ptr, app::ISuspendable* key))
    IL2CPP_REGISTER_METHOD(0x02BCDF80, bool, TryGetValue, (app::Dictionary_2_Moon_ISuspendable_System_Int32_ * this_ptr, app::ISuspendable* key, int32_t* value))
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_Moon_ISuspendable_System_Int32_ * this_ptr, app::ISuspendable* key, int32_t value))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_Moon_ISuspendable_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::Dictionary_2_TKey_TValue_KeyCollection_Moon_ISuspendable_System_Int32_*, get_Keys, (app::Dictionary_2_Moon_ISuspendable_System_Int32_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_ISuspendable_System_Int32_
