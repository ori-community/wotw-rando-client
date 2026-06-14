#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MemberInfoSerializationHolder.h>
#include <Modloader/app/structs/MemberTypes__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RuntimeType.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type__Array.h>

namespace app::classes::System::Reflection::MemberInfoSerializationHolder {
    IL2CPP_REGISTER_METHOD(
        0x0268B610,
        void,
        GetSerializationInfo_1,
        app::SerializationInfo* info,
        app::String* name,
        app::RuntimeType* reflected_class,
        app::String* signature,
        app::MemberTypes__Enum type
    )
    IL2CPP_REGISTER_METHOD(
        0x0268B640,
        void,
        GetSerializationInfo_2,
        app::SerializationInfo* info,
        app::String* name,
        app::RuntimeType* reflected_class,
        app::String* signature,
        app::String* signature2,
        app::MemberTypes__Enum type,
        app::Type__Array* generic_arguments
    )
    IL2CPP_REGISTER_METHOD(0x0268B900, void, ctor, app::MemberInfoSerializationHolder* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(
        0x0268BB70,
        void,
        GetObjectData,
        app::MemberInfoSerializationHolder* this_ptr,
        app::SerializationInfo* info,
        app::StreamingContext context
    )
    IL2CPP_REGISTER_METHOD(0x0268BBE0, app::Object*, GetRealObject, app::MemberInfoSerializationHolder* this_ptr, app::StreamingContext context)
} // namespace app::classes::System::Reflection::MemberInfoSerializationHolder
