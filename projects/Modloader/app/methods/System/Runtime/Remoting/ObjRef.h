#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/IChannelInfo.h>
#include <Modloader/app/structs/IEnvoyInfo.h>
#include <Modloader/app/structs/IRemotingTypeInfo.h>
#include <Modloader/app/structs/ObjRef.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Runtime::Remoting::ObjRef {
    IL2CPP_REGISTER_METHOD(0x0231B8D0, void, ctor_1, app::ObjRef* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0231B8E0, void, ctor_2, app::ObjRef* this_ptr, app::String* uri, app::IChannelInfo* cinfo)
    IL2CPP_REGISTER_METHOD(0x0231B8F0, app::ObjRef*, DeserializeInTheCurrentDomain, app::ObjRef* this_ptr, int32_t domain_id, app::Byte__Array* t_info)
    IL2CPP_REGISTER_METHOD(0x0231BC30, app::Byte__Array*, SerializeType, app::ObjRef* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0231BD00, void, ctor_3, app::ObjRef* this_ptr, app::Type* type, app::String* url, app::Object* remote_channel_data)
    IL2CPP_REGISTER_METHOD(0x0231BF70, void, ctor_4, app::ObjRef* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x0231C3A0, bool, get_IsReferenceToWellKnow, app::ObjRef* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::IChannelInfo*, get_ChannelInfo, app::ObjRef* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::IEnvoyInfo*, get_EnvoyInfo, app::ObjRef* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_EnvoyInfo, app::ObjRef* this_ptr, app::IEnvoyInfo* value)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::IRemotingTypeInfo*, get_TypeInfo, app::ObjRef* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_TypeInfo, app::ObjRef* this_ptr, app::IRemotingTypeInfo* value)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_URI, app::ObjRef* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_URI, app::ObjRef* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0231C450, void, GetObjectData, app::ObjRef* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x0231C5F0, app::Object*, GetRealObject, app::ObjRef* this_ptr, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x0231C6E0, void, UpdateChannelInfo, app::ObjRef* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0231C8A0, app::Type*, get_ServerType, app::ObjRef* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0231C9B0, void, cctor, )
} // namespace app::classes::System::Runtime::Remoting::ObjRef
