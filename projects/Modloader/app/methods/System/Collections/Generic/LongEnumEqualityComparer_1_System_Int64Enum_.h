#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Int64Enum__Enum.h>
#include <Modloader/app/structs/LongEnumEqualityComparer_1_System_Int64Enum_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>

namespace app::classes::System::Collections::Generic::LongEnumEqualityComparer_1_System_Int64Enum_ {
    IL2CPP_REGISTER_METHOD(
        0x02C28C20,
        bool,
        Equals_1,
        app::LongEnumEqualityComparer_1_System_Int64Enum_* this_ptr,
        app::Int64Enum__Enum x,
        app::Int64Enum__Enum y
    )
    IL2CPP_REGISTER_METHOD(0x02C28C80, int32_t, GetHashCode_1, app::LongEnumEqualityComparer_1_System_Int64Enum_* this_ptr, app::Int64Enum__Enum obj)
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, app::LongEnumEqualityComparer_1_System_Int64Enum_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, app::LongEnumEqualityComparer_1_System_Int64Enum_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor_1, app::LongEnumEqualityComparer_1_System_Int64Enum_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02C28CB0,
        void,
        ctor_2,
        app::LongEnumEqualityComparer_1_System_Int64Enum_* this_ptr,
        app::SerializationInfo* information,
        app::StreamingContext context
    )
    IL2CPP_REGISTER_METHOD(
        0x02C28CE0,
        void,
        GetObjectData,
        app::LongEnumEqualityComparer_1_System_Int64Enum_* this_ptr,
        app::SerializationInfo* info,
        app::StreamingContext context
    )
} // namespace app::classes::System::Collections::Generic::LongEnumEqualityComparer_1_System_Int64Enum_
