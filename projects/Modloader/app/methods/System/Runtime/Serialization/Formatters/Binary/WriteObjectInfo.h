#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IFormatterConverter.h>
#include <Modloader/app/structs/ISurrogateSelector.h>
#include <Modloader/app/structs/MemberInfo_1.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ObjectWriter.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/SerObjectInfoCache.h>
#include <Modloader/app/structs/SerObjectInfoInit.h>
#include <Modloader/app/structs/SerializationBinder.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Type__Array.h>
#include <Modloader/app/structs/WriteObjectInfo.h>

namespace app::classes::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::WriteObjectInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DA24F0, void, ObjectEnd, app::WriteObjectInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DA2530, void, InternalInit, app::WriteObjectInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01DA2560,
        app::WriteObjectInfo*,
        Serialize_1,
        app::Object* obj,
        app::ISurrogateSelector* surrogate_selector,
        app::StreamingContext context,
        app::SerObjectInfoInit* ser_object_info_init,
        app::IFormatterConverter* converter,
        app::ObjectWriter* object_writer,
        app::SerializationBinder* binder
    )
    IL2CPP_REGISTER_METHOD(
        0x01DA2610,
        void,
        InitSerialize_1,
        app::WriteObjectInfo* this_ptr,
        app::Object* obj,
        app::ISurrogateSelector* surrogate_selector,
        app::StreamingContext context,
        app::SerObjectInfoInit* ser_object_info_init,
        app::IFormatterConverter* converter,
        app::ObjectWriter* object_writer,
        app::SerializationBinder* binder
    )
    IL2CPP_REGISTER_METHOD(
        0x01DA2C50,
        app::WriteObjectInfo*,
        Serialize_2,
        app::Type* object_type,
        app::ISurrogateSelector* surrogate_selector,
        app::StreamingContext context,
        app::SerObjectInfoInit* ser_object_info_init,
        app::IFormatterConverter* converter,
        app::SerializationBinder* binder
    )
    IL2CPP_REGISTER_METHOD(
        0x01DA2CF0,
        void,
        InitSerialize_2,
        app::WriteObjectInfo* this_ptr,
        app::Type* object_type,
        app::ISurrogateSelector* surrogate_selector,
        app::StreamingContext context,
        app::SerObjectInfoInit* ser_object_info_init,
        app::IFormatterConverter* converter,
        app::SerializationBinder* binder
    )
    IL2CPP_REGISTER_METHOD(0x01DA3310, void, InitSiWrite, app::WriteObjectInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01DA3850,
        void,
        CheckTypeForwardedFrom,
        app::SerObjectInfoCache* cache,
        app::Type* object_type,
        app::String* binder_assembly_string
    )
    IL2CPP_REGISTER_METHOD(0x01DA3970, void, InitNoMembers, app::WriteObjectInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DA3B60, void, InitMemberInfo, app::WriteObjectInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DA4020, app::String*, GetTypeFullName, app::WriteObjectInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DA4050, app::String*, GetAssemblyString, app::WriteObjectInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DA4080, void, InvokeSerializationBinder, app::WriteObjectInfo* this_ptr, app::SerializationBinder* binder)
    IL2CPP_REGISTER_METHOD(0x01DA40C0, app::Type*, GetMemberType, app::WriteObjectInfo* this_ptr, app::MemberInfo_1* obj_member)
    IL2CPP_REGISTER_METHOD(
        0x01DA4340,
        void,
        GetMemberInfo,
        app::WriteObjectInfo* this_ptr,
        app::String__Array** out_member_names,
        app::Type__Array** out_member_types,
        app::Object__Array** out_member_data
    )
    IL2CPP_REGISTER_METHOD(0x01DA4460, app::WriteObjectInfo*, GetObjectInfo, app::SerObjectInfoInit* ser_object_info_init)
    IL2CPP_REGISTER_METHOD(0x01DA4670, void, PutObjectInfo, app::SerObjectInfoInit* ser_object_info_init, app::WriteObjectInfo* object_info)
} // namespace app::classes::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo
