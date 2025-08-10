#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RuntimeMethodHandle__Boxed.h>
#include <Modloader/app/structs/RuntimeMethodInfo.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TypeNameFormatFlags__Enum.h>

namespace app::classes::System::RuntimeMethodHandle {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor_1, app::RuntimeMethodHandle__Boxed* this_ptr, void* v)
    IL2CPP_REGISTER_METHOD(0x001D8110, void, ctor_2, app::RuntimeMethodHandle__Boxed* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x00107C00, void*, get_Value, app::RuntimeMethodHandle__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001D8130,
        void,
        GetObjectData,
        app::RuntimeMethodHandle__Boxed* this_ptr,
        app::SerializationInfo* info,
        app::StreamingContext context
    )
    IL2CPP_REGISTER_METHOD(0x001D82A0, bool, Equals, app::RuntimeMethodHandle__Boxed* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, app::RuntimeMethodHandle__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EE2730, app::String*, ConstructInstantiation, app::RuntimeMethodInfo* method_1, app::TypeNameFormatFlags__Enum format)
    IL2CPP_REGISTER_METHOD(0x001D83D0, bool, IsNullHandle, app::RuntimeMethodHandle__Boxed* this_ptr)
} // namespace app::classes::System::RuntimeMethodHandle
