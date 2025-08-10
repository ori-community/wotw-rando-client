#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ErrorContext.h>
#include <Modloader/app/structs/Func_1_Object_.h>
#include <Modloader/app/structs/IList_1_Newtonsoft_Json_Serialization_SerializationCallback_.h>
#include <Modloader/app/structs/IList_1_Newtonsoft_Json_Serialization_SerializationErrorCallback_.h>
#include <Modloader/app/structs/JsonContract.h>
#include <Modloader/app/structs/JsonConverter.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/Nullable_1_Boolean_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SerializationCallback.h>
#include <Modloader/app/structs/SerializationErrorCallback.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::Newtonsoft::Json::Serialization::JsonContract {
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::Type*, get_UnderlyingType, app::JsonContract* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::Type*, get_CreatedType, app::JsonContract* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0186DF20, void, set_CreatedType, app::JsonContract* this_ptr, app::Type* value)
    IL2CPP_REGISTER_METHOD(0x0186DFC0, app::Nullable_1_Boolean_, get_IsReference, app::JsonContract* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0186DFD0, void, set_IsReference, app::JsonContract* this_ptr, app::Nullable_1_Boolean_ value)
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::JsonConverter*, get_Converter, app::JsonContract* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_Converter, app::JsonContract* this_ptr, app::JsonConverter* value)
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::JsonConverter*, get_InternalConverter, app::JsonContract* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_InternalConverter, app::JsonContract* this_ptr, app::JsonConverter* value)
    IL2CPP_REGISTER_METHOD(
        0x0186DFE0,
        app::IList_1_Newtonsoft_Json_Serialization_SerializationCallback_*,
        get_OnDeserializedCallbacks,
        app::JsonContract* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0186E140,
        app::IList_1_Newtonsoft_Json_Serialization_SerializationCallback_*,
        get_OnDeserializingCallbacks,
        app::JsonContract* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0186E2A0,
        app::IList_1_Newtonsoft_Json_Serialization_SerializationCallback_*,
        get_OnSerializedCallbacks,
        app::JsonContract* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0186E400,
        app::IList_1_Newtonsoft_Json_Serialization_SerializationCallback_*,
        get_OnSerializingCallbacks,
        app::JsonContract* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0186E560,
        app::IList_1_Newtonsoft_Json_Serialization_SerializationErrorCallback_*,
        get_OnErrorCallbacks,
        app::JsonContract* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x002FBC00, app::Func_1_Object_*, get_DefaultCreator, app::JsonContract* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC10, void, set_DefaultCreator, app::JsonContract* this_ptr, app::Func_1_Object_* value)
    IL2CPP_REGISTER_METHOD(0x003FFE10, bool, get_DefaultCreatorNonPublic, app::JsonContract* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0057BAC0, void, set_DefaultCreatorNonPublic, app::JsonContract* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0186E6C0, void, ctor, app::JsonContract* this_ptr, app::Type* underlying_type)
    IL2CPP_REGISTER_METHOD(0x0186E880, void, InvokeOnSerializing, app::JsonContract* this_ptr, app::Object* o, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x0186EA80, void, InvokeOnSerialized, app::JsonContract* this_ptr, app::Object* o, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x0186EC80, void, InvokeOnDeserializing, app::JsonContract* this_ptr, app::Object* o, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x0186EE80, void, InvokeOnDeserialized, app::JsonContract* this_ptr, app::Object* o, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(
        0x0186EFF0,
        void,
        InvokeOnError,
        app::JsonContract* this_ptr,
        app::Object* o,
        app::StreamingContext context,
        app::ErrorContext* error_context
    )
    IL2CPP_REGISTER_METHOD(0x0186F210, app::SerializationCallback*, CreateSerializationCallback, app::MethodInfo_1* callback_method_info)
    IL2CPP_REGISTER_METHOD(0x0186F430, app::SerializationErrorCallback*, CreateSerializationErrorCallback, app::MethodInfo_1* callback_method_info)
} // namespace app::classes::Newtonsoft::Json::Serialization::JsonContract
