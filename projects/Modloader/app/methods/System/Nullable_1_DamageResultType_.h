#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DamageResultType__Enum.h>
#include <Modloader/app/structs/Nullable_1_DamageResultType___Boxed.h>

namespace app::classes::System::Nullable_1_DamageResultType_ {
    IL2CPP_REGISTER_METHOD(0x001F6090, bool, get_HasValue, app::Nullable_1_DamageResultType___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0020E5F0, app::DamageResultType__Enum, get_Value, app::Nullable_1_DamageResultType___Boxed* this_ptr)
} // namespace app::classes::System::Nullable_1_DamageResultType_
