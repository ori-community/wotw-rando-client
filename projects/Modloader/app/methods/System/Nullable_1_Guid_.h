#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Guid.h>
#include <Modloader/app/structs/Nullable_1_Guid_.h>
#include <Modloader/app/structs/Nullable_1_Guid___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Nullable_1_Guid_ {
    IL2CPP_REGISTER_METHOD(0x001F4750, bool, get_HasValue, app::Nullable_1_Guid___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0010A980, app::Guid, GetValueOrDefault_1, app::Nullable_1_Guid___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00120520, void, ctor, app::Nullable_1_Guid___Boxed* this_ptr, app::Guid value)
    IL2CPP_REGISTER_METHOD(0x0020DCA0, app::Guid, get_Value, app::Nullable_1_Guid___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0020DD90, bool, Equals_1, app::Nullable_1_Guid___Boxed* this_ptr, app::Object* other)
    IL2CPP_REGISTER_METHOD(0x0020DDE0, bool, Equals_2, app::Nullable_1_Guid___Boxed* this_ptr, app::Nullable_1_Guid_ other)
    IL2CPP_REGISTER_METHOD(0x0020DED0, int32_t, GetHashCode, app::Nullable_1_Guid___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001F49C0, app::Guid, GetValueOrDefault_2, app::Nullable_1_Guid___Boxed* this_ptr, app::Guid default_value)
    IL2CPP_REGISTER_METHOD(0x0020DF40, app::String*, ToString, app::Nullable_1_Guid___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0254F710, app::Object*, Box, app::Nullable_1_Guid_ o)
    IL2CPP_REGISTER_METHOD(0x02888C40, app::Nullable_1_Guid_, Unbox, app::Object* o)
} // namespace app::classes::System::Nullable_1_Guid_
