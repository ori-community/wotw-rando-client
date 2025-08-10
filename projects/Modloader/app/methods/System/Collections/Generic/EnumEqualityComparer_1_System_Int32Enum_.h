#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EnumEqualityComparer_1_System_Int32Enum_.h>
#include <Modloader/app/structs/Int32Enum__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>

namespace app::classes::System::Collections::Generic::EnumEqualityComparer_1_System_Int32Enum_ {
    IL2CPP_REGISTER_METHOD(0x02CBD390, bool, Equals_1, app::EnumEqualityComparer_1_System_Int32Enum_* this_ptr, app::Int32Enum__Enum x, app::Int32Enum__Enum y)
    IL2CPP_REGISTER_METHOD(0x02CBD3F0, int32_t, GetHashCode_1, app::EnumEqualityComparer_1_System_Int32Enum_* this_ptr, app::Int32Enum__Enum obj)
    IL2CPP_REGISTER_METHOD(0x0298B8E0, void, ctor_1, app::EnumEqualityComparer_1_System_Int32Enum_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02CBD1C0,
        void,
        ctor_2,
        app::EnumEqualityComparer_1_System_Int32Enum_* this_ptr,
        app::SerializationInfo* information,
        app::StreamingContext context
    )
    IL2CPP_REGISTER_METHOD(
        0x02CBD410,
        void,
        GetObjectData,
        app::EnumEqualityComparer_1_System_Int32Enum_* this_ptr,
        app::SerializationInfo* info,
        app::StreamingContext context
    )
    IL2CPP_REGISTER_METHOD(0x02CBD340, bool, Equals_2, app::EnumEqualityComparer_1_System_Int32Enum_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, app::EnumEqualityComparer_1_System_Int32Enum_* this_ptr)
} // namespace app::classes::System::Collections::Generic::EnumEqualityComparer_1_System_Int32Enum_
