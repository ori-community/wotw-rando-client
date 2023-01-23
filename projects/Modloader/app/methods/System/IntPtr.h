#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IntPtr__Boxed.h>
#include <Modloader/app/structs/Void.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::IntPtr {
    IL2CPP_REGISTER_METHOD(0x001DE610, void, ctor_1, (app::IntPtr__Boxed * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor_2, (app::IntPtr__Boxed * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor_3, (app::IntPtr__Boxed * this_ptr, app::Void* value))
    IL2CPP_REGISTER_METHOD(0x001E9770, void, ctor_4, (app::IntPtr__Boxed * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x0043D9A0, int32_t, get_Size, ())
    IL2CPP_REGISTER_METHOD(0x001E9810, void, ISerializable_GetObjectData, (app::IntPtr__Boxed * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x04708FA8, IntPtr_System_Runtime_Serialization_ISerializable_GetObjectData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001E98E0, bool, Equals, (app::IntPtr__Boxed * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (app::IntPtr__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, ToInt32, (app::IntPtr__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D9820, int64_t, ToInt64, (app::IntPtr__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00107C00, app::Void*, ToPointer, (app::IntPtr__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00131090, app::String*, ToString_1, (app::IntPtr__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001E98F0, app::String*, ToString_2, (app::IntPtr__Boxed * this_ptr, app::String* format))
    IL2CPP_REGISTER_METHOD(0x015F8190, bool, op_Equality, (void* value1, void* value2))
    IL2CPP_REGISTER_METHOD(0x015F81A0, bool, op_Inequality, (void* value1, void* value2))
    IL2CPP_REGISTER_METHOD(0x01A948E0, void*, op_Explicit_1, (int32_t value))
    IL2CPP_REGISTER_METHOD(0x004C50A0, void*, op_Explicit_2, (int64_t value))
    IL2CPP_REGISTER_METHOD(0x004C50A0, void*, op_Explicit_3, (app::Void * value))
    IL2CPP_REGISTER_METHOD(0x006CE970, int32_t, op_Explicit_4, (void* value))
    IL2CPP_REGISTER_METHOD(0x0238D4F0, int64_t, op_Explicit_5, (void* value))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::Void*, op_Explicit_6, (void* value))
    IL2CPP_REGISTER_METHOD(0x0157E100, void*, Add, (void* pointer, int32_t offset))
    IL2CPP_REGISTER_METHOD(0x001D5C40, bool, IsNull, (app::IntPtr__Boxed * this_ptr))
    inline bool operator==(void& value1, void& value2) {
        return op_Equality(&value1, &value2);
    }
    inline bool operator!=(void& value1, void& value2) {
        return op_Inequality(&value1, &value2);
    }
} // namespace app::classes::System::IntPtr
