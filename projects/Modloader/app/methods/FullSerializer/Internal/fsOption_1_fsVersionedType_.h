#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/fsOption_1_fsVersionedType___Boxed.h>
#include <Modloader/app/structs/fsVersionedType.h>

namespace app::classes::FullSerializer::Internal::fsOption_1_fsVersionedType_ {
    IL2CPP_REGISTER_METHOD(0x0012C630, bool, get_IsEmpty, (app::fsOption_1_fsVersionedType___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001541C0, app::fsVersionedType, get_Value, (app::fsOption_1_fsVersionedType___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010E100, bool, get_HasValue, (app::fsOption_1_fsVersionedType___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001541F0, void, ctor, (app::fsOption_1_fsVersionedType___Boxed * this_ptr, app::fsVersionedType value))
} // namespace app::classes::FullSerializer::Internal::fsOption_1_fsVersionedType_
