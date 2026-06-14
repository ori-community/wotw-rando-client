#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Nullable_1_Double_.h>
#include <Modloader/app/structs/Nullable_1_Double___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Nullable_1_Double_ {
    IL2CPP_REGISTER_METHOD(0x00155570, double, GetValueOrDefault_1, app::Nullable_1_Double___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001F8960, bool, get_HasValue, app::Nullable_1_Double___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0020DB70, int32_t, GetHashCode, app::Nullable_1_Double___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0020D950, void, ctor, app::Nullable_1_Double___Boxed* this_ptr, double value)
    IL2CPP_REGISTER_METHOD(0x0020D960, double, get_Value, app::Nullable_1_Double___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0020DA40, bool, Equals_1, app::Nullable_1_Double___Boxed* this_ptr, app::Object* other)
    IL2CPP_REGISTER_METHOD(0x0020DA90, bool, Equals_2, app::Nullable_1_Double___Boxed* this_ptr, app::Nullable_1_Double_ other)
    IL2CPP_REGISTER_METHOD(0x0020DBB0, double, GetValueOrDefault_2, app::Nullable_1_Double___Boxed* this_ptr, double default_value)
    IL2CPP_REGISTER_METHOD(0x0020DBD0, app::String*, ToString, app::Nullable_1_Double___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02888E70, app::Object*, Box, app::Nullable_1_Double_ o)
    IL2CPP_REGISTER_METHOD(0x02888EF0, app::Nullable_1_Double_, Unbox, app::Object* o)
} // namespace app::classes::System::Nullable_1_Double_
