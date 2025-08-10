#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IAttackable.h>
#include <Modloader/app/structs/KeyValuePair_2_IAttackable_LockOnTarget___Boxed.h>
#include <Modloader/app/structs/LockOnTarget.h>

namespace app::classes::System::Collections::Generic::KeyValuePair_2_IAttackable_LockOnTarget_ {
    IL2CPP_REGISTER_METHOD(0x00107C00, app::IAttackable*, get_Key, app::KeyValuePair_2_IAttackable_LockOnTarget___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00107C10, app::LockOnTarget*, get_Value, app::KeyValuePair_2_IAttackable_LockOnTarget___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::KeyValuePair_2_IAttackable_LockOnTarget_
