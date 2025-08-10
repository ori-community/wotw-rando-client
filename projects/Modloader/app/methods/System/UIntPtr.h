#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UIntPtr__Boxed.h>
#include <Modloader/app/structs/Void.h>

namespace app::classes::System::UIntPtr {
    IL2CPP_REGISTER_METHOD(0x00206760, void, ctor_1, app::UIntPtr__Boxed* this_ptr, uint64_t value)
    IL2CPP_REGISTER_METHOD(0x00206770, void, ctor_2, app::UIntPtr__Boxed* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor_3, app::UIntPtr__Boxed* this_ptr, app::Void* value)
    IL2CPP_REGISTER_METHOD(0x00206780, bool, Equals, app::UIntPtr__Boxed* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, app::UIntPtr__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00107C00, uint64_t, ToUInt64, app::UIntPtr__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00206790, app::String*, ToString, app::UIntPtr__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00206840,
        void,
        ISerializable_GetObjectData,
        app::UIntPtr__Boxed* this_ptr,
        app::SerializationInfo* info,
        app::StreamingContext context
    )
    IL2CPP_REGISTER_METHOD(0x015F8190, bool, op_Equality, void* value1, void* value2)
    IL2CPP_REGISTER_METHOD(0x004C50A0, uint64_t, op_Explicit_1, void* value)
    IL2CPP_REGISTER_METHOD(0x004C50A0, void*, op_Explicit_2, app::Void* value)
    IL2CPP_REGISTER_METHOD(0x0043D9A0, int32_t, get_Size, )
    IL2CPP_REGISTER_METHOD(0x027C59D0, void, cctor, )
    inline bool operator==(void& value1, void& value2) { return op_Equality(&value1, &value2); }
} // namespace app::classes::System::UIntPtr
