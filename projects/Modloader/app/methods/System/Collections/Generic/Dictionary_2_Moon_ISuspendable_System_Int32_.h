#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_Moon_ISuspendable_System_Int32_.h>
#include <Modloader/app/structs/ISuspendable.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_Moon_ISuspendable_System_Int32_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_ISuspendable_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_Moon_ISuspendable_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04797320, Dictionary_2_Moon_ISuspendable_System_Int32__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_Moon_ISuspendable_System_Int32_ * this_ptr, app::ISuspendable* key))
    IL2CPP_REGISTER_METHODINFO(0x0474AA48, Dictionary_2_Moon_ISuspendable_System_Int32__ContainsKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_Moon_ISuspendable_System_Int32_ * this_ptr, app::ISuspendable* key, int32_t value))
    IL2CPP_REGISTER_METHODINFO(0x0478F760, Dictionary_2_Moon_ISuspendable_System_Int32__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BCDB30, bool, Remove, (app::Dictionary_2_Moon_ISuspendable_System_Int32_ * this_ptr, app::ISuspendable* key))
    IL2CPP_REGISTER_METHODINFO(0x0475C6D8, Dictionary_2_Moon_ISuspendable_System_Int32__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BCDF80, bool, TryGetValue, (app::Dictionary_2_Moon_ISuspendable_System_Int32_ * this_ptr, app::ISuspendable* key, int32_t* value))
    IL2CPP_REGISTER_METHODINFO(0x0478CC20, Dictionary_2_Moon_ISuspendable_System_Int32__TryGetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_Moon_ISuspendable_System_Int32_ * this_ptr, app::ISuspendable* key, int32_t value))
    IL2CPP_REGISTER_METHODINFO(0x04768548, Dictionary_2_Moon_ISuspendable_System_Int32__set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_Moon_ISuspendable_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04702C88, Dictionary_2_Moon_ISuspendable_System_Int32___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::Dictionary_2_TKey_TValue_KeyCollection_Moon_ISuspendable_System_Int32_*, get_Keys, (app::Dictionary_2_Moon_ISuspendable_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477D628, Dictionary_2_Moon_ISuspendable_System_Int32__get_Keys__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_ISuspendable_System_Int32_
