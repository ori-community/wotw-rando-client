#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Nullable_1_System_Runtime_Serialization_StreamingContext___Boxed.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Nullable_1_System_Runtime_Serialization_StreamingContext_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Nullable_1_System_Runtime_Serialization_StreamingContext_ {
    IL2CPP_REGISTER_METHOD(0x001F4750, bool, get_HasValue, (app::Nullable_1_System_Runtime_Serialization_StreamingContext___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047608C8, Nullable_1_System_Runtime_Serialization_StreamingContext__get_HasValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0010A980, app::StreamingContext, GetValueOrDefault_1, (app::Nullable_1_System_Runtime_Serialization_StreamingContext___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04728828, Nullable_1_System_Runtime_Serialization_StreamingContext__GetValueOrDefault__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00120520, void, ctor, (app::Nullable_1_System_Runtime_Serialization_StreamingContext___Boxed * this_ptr, app::StreamingContext value))
    IL2CPP_REGISTER_METHOD(0x0020F670, app::StreamingContext, get_Value, (app::Nullable_1_System_Runtime_Serialization_StreamingContext___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047048C0, Nullable_1_System_Runtime_Serialization_StreamingContext__get_Value__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0020F760, bool, Equals_1, (app::Nullable_1_System_Runtime_Serialization_StreamingContext___Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x0020F7B0, bool, Equals_2, (app::Nullable_1_System_Runtime_Serialization_StreamingContext___Boxed * this_ptr, app::Nullable_1_System_Runtime_Serialization_StreamingContext_ other))
    IL2CPP_REGISTER_METHOD(0x0020F8A0, int32_t, GetHashCode, (app::Nullable_1_System_Runtime_Serialization_StreamingContext___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001F49C0, app::StreamingContext, GetValueOrDefault_2, (app::Nullable_1_System_Runtime_Serialization_StreamingContext___Boxed * this_ptr, app::StreamingContext default_value))
    IL2CPP_REGISTER_METHOD(0x0020F8D0, app::String*, ToString, (app::Nullable_1_System_Runtime_Serialization_StreamingContext___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0254E8A0, app::Object*, Box, (app::Nullable_1_System_Runtime_Serialization_StreamingContext_ o))
    IL2CPP_REGISTER_METHOD(0x0254E930, app::Nullable_1_System_Runtime_Serialization_StreamingContext_, Unbox, (app::Object * o))
} // namespace app::classes::System::Nullable_1_System_Runtime_Serialization_StreamingContext_
