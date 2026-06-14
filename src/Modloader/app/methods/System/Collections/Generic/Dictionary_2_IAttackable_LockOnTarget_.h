#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_IAttackable_LockOnTarget_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_IAttackable_LockOnTarget_.h>
#include <Modloader/app/structs/IAttackable.h>
#include <Modloader/app/structs/LockOnTarget.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_IAttackable_LockOnTarget_ {
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, app::Dictionary_2_IAttackable_LockOnTarget_* this_ptr, app::IAttackable* key)
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, app::Dictionary_2_IAttackable_LockOnTarget_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BA5400,
        app::Dictionary_2_TKey_TValue_Enumerator_IAttackable_LockOnTarget_,
        GetEnumerator,
        app::Dictionary_2_IAttackable_LockOnTarget_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, app::Dictionary_2_IAttackable_LockOnTarget_* this_ptr, app::IAttackable* key, app::LockOnTarget* value)
    IL2CPP_REGISTER_METHOD(0x02BD24D0, app::LockOnTarget*, get_Item, app::Dictionary_2_IAttackable_LockOnTarget_* this_ptr, app::IAttackable* key)
    IL2CPP_REGISTER_METHOD(0x02BD3EC0, bool, Remove, app::Dictionary_2_IAttackable_LockOnTarget_* this_ptr, app::IAttackable* key)
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, app::Dictionary_2_IAttackable_LockOnTarget_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_IAttackable_LockOnTarget_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_IAttackable_LockOnTarget_
