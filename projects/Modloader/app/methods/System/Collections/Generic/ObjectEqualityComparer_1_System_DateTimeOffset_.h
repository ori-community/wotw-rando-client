#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ObjectEqualityComparer_1_System_DateTimeOffset_.h>
#include <Modloader/app/structs/DateTimeOffset.h>
#include <Modloader/app/structs/DateTimeOffset__Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_System_DateTimeOffset_ {
    IL2CPP_REGISTER_METHOD(0x0265B370, bool, Equals_1, (app::ObjectEqualityComparer_1_System_DateTimeOffset_ * this_ptr, app::DateTimeOffset x, app::DateTimeOffset y))
    IL2CPP_REGISTER_METHOD(0x0265B3D0, int32_t, GetHashCode_1, (app::ObjectEqualityComparer_1_System_DateTimeOffset_ * this_ptr, app::DateTimeOffset obj))
    IL2CPP_REGISTER_METHOD(0x0265B400, int32_t, IndexOf, (app::ObjectEqualityComparer_1_System_DateTimeOffset_ * this_ptr, app::DateTimeOffset__Array* array, app::DateTimeOffset value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x0265B4F0, int32_t, LastIndexOf, (app::ObjectEqualityComparer_1_System_DateTimeOffset_ * this_ptr, app::DateTimeOffset__Array* array, app::DateTimeOffset value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, (app::ObjectEqualityComparer_1_System_DateTimeOffset_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, (app::ObjectEqualityComparer_1_System_DateTimeOffset_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, (app::ObjectEqualityComparer_1_System_DateTimeOffset_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_System_DateTimeOffset_
