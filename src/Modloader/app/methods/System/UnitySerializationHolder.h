#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Missing.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RuntimeAssembly.h>
#include <Modloader/app/structs/RuntimeType.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/UnitySerializationHolder.h>

namespace app::classes::System::UnitySerializationHolder {
    IL2CPP_REGISTER_METHOD(0x027C5C80, void, GetUnitySerializationInfo_1, app::SerializationInfo* info, app::Missing* missing)
    IL2CPP_REGISTER_METHOD(0x027C5D60, app::RuntimeType*, AddElementTypes, app::SerializationInfo* info, app::RuntimeType* type)
    IL2CPP_REGISTER_METHOD(0x027C6380, app::Type*, MakeElementTypes, app::UnitySerializationHolder* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x027C6520, void, GetUnitySerializationInfo_2, app::SerializationInfo* info, app::RuntimeType* type)
    IL2CPP_REGISTER_METHOD(
        0x027C68C0,
        void,
        GetUnitySerializationInfo_3,
        app::SerializationInfo* info,
        int32_t unity_type,
        app::String* data,
        app::RuntimeAssembly* assembly
    )
    IL2CPP_REGISTER_METHOD(0x027C6A30, void, ctor, app::UnitySerializationHolder* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x027C6CC0, void, ThrowInsufficientInformation, app::UnitySerializationHolder* this_ptr, app::String* field)
    IL2CPP_REGISTER_METHOD(
        0x027C6D60,
        void,
        GetObjectData,
        app::UnitySerializationHolder* this_ptr,
        app::SerializationInfo* info,
        app::StreamingContext context
    )
    IL2CPP_REGISTER_METHOD(0x027C6DD0, app::Object*, GetRealObject, app::UnitySerializationHolder* this_ptr, app::StreamingContext context)
} // namespace app::classes::System::UnitySerializationHolder
