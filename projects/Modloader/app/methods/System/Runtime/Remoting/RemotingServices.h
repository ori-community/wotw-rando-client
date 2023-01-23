#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/MethodBase.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/IMethodReturnMessage.h>
#include <Modloader/app/structs/MarshalByRefObject.h>
#include <Modloader/app/structs/IMethodCallMessage.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ObjRef.h>
#include <Modloader/app/structs/RealProxy.h>
#include <Modloader/app/structs/IMethodMessage.h>
#include <Modloader/app/structs/Type__Array.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/ActivatedClientTypeEntry.h>
#include <Modloader/app/structs/WellKnownClientTypeEntry.h>
#include <Modloader/app/structs/Identity.h>
#include <Modloader/app/structs/ClientIdentity.h>
#include <Modloader/app/structs/IMessageSink.h>
#include <Modloader/app/structs/ClientActivatedIdentity.h>
#include <Modloader/app/structs/ServerIdentity.h>
#include <Modloader/app/structs/WellKnownObjectMode__Enum.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/IMessage.h>
#include <Modloader/app/structs/ParameterInfo_1.h>

namespace app::classes::System::Runtime::Remoting::RemotingServices {
    IL2CPP_REGISTER_METHOD(0x02323E80, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x02324510, app::Object*, InternalExecute, (app::MethodBase * method_1, app::Object* obj, app::Object__Array* parameters, app::Object__Array** out_args))
    IL2CPP_REGISTER_METHOD(0x02324520, app::MethodBase*, GetVirtualMethod, (app::Type * type, app::MethodBase* method_1))
    IL2CPP_REGISTER_METHOD(0x02324530, bool, IsTransparentProxy, (app::Object * proxy))
    IL2CPP_REGISTER_METHODINFO(0x047353E0, RemotingServices_IsTransparentProxy__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02324580, app::IMethodReturnMessage*, InternalExecuteMessage, (app::MarshalByRefObject * target, app::IMethodCallMessage* req_msg))
    IL2CPP_REGISTER_METHODINFO(0x0470BF58, RemotingServices_InternalExecuteMessage__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02324A40, app::Object*, Connect_1, (app::Type * class_to_proxy, app::String* url))
    IL2CPP_REGISTER_METHOD(0x02324BD0, app::Object*, Connect_2, (app::Type * class_to_proxy, app::String* url, app::Object* data))
    IL2CPP_REGISTER_METHOD(0x02324D60, app::Type*, GetServerTypeForUri, (app::String * u_r_i))
    IL2CPP_REGISTER_METHOD(0x02324E60, app::Object*, Unmarshal_1, (app::ObjRef * object_ref))
    IL2CPP_REGISTER_METHOD(0x02324F00, app::Object*, Unmarshal_2, (app::ObjRef * object_ref, bool f_refine))
    IL2CPP_REGISTER_METHOD(0x023252A0, app::ObjRef*, Marshal_1, (app::MarshalByRefObject * obj))
    IL2CPP_REGISTER_METHOD(0x02325340, app::ObjRef*, Marshal_2, (app::MarshalByRefObject * obj, app::String* obj_u_r_i, app::Type* requested_type))
    IL2CPP_REGISTER_METHODINFO(0x0478E698, RemotingServices_Marshal_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x023253E0, app::String*, NewUri, ())
    IL2CPP_REGISTER_METHOD(0x02325940, app::RealProxy*, GetRealProxy, (app::Object * proxy))
    IL2CPP_REGISTER_METHODINFO(0x04760110, RemotingServices_GetRealProxy__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x023259E0, app::MethodBase*, GetMethodBaseFromMethodMessage, (app::IMethodMessage * msg))
    IL2CPP_REGISTER_METHODINFO(0x04784720, RemotingServices_GetMethodBaseFromMethodMessage__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02325BE0, app::MethodBase*, GetMethodBaseFromName, (app::Type * type, app::String* method_name, app::Type__Array* signature))
    IL2CPP_REGISTER_METHOD(0x02325E50, app::MethodBase*, FindInterfaceMethod, (app::Type * type, app::String* method_name, app::Type__Array* signature))
    IL2CPP_REGISTER_METHOD(0x02326000, void, GetObjectData, (app::Object * obj, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x0474C308, RemotingServices_GetObjectData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x023260E0, bool, IsOneWay, (app::MethodBase * method_1))
    IL2CPP_REGISTER_METHOD(0x023261B0, app::Object*, CreateClientProxy_1, (app::ActivatedClientTypeEntry * entry, app::Object__Array* activation_attributes))
    IL2CPP_REGISTER_METHOD(0x023263B0, app::Object*, CreateClientProxy_2, (app::Type * object_type, app::String* url, app::Object__Array* activation_attributes))
    IL2CPP_REGISTER_METHOD(0x023265D0, app::Object*, CreateClientProxy_3, (app::WellKnownClientTypeEntry * entry))
    IL2CPP_REGISTER_METHOD(0x02326690, app::Object*, CreateClientProxyForContextBound, (app::Type * type, app::Object__Array* activation_attributes))
    IL2CPP_REGISTER_METHOD(0x02326920, app::Identity*, GetIdentityForUri, (app::String * uri))
    IL2CPP_REGISTER_METHOD(0x02326BF0, app::String*, RemoveAppNameFromUri, (app::String * uri))
    IL2CPP_REGISTER_METHOD(0x02326D80, app::ClientIdentity*, GetOrCreateClientIdentity, (app::ObjRef * obj_ref, app::Type* proxy_type, app::Object** client_proxy))
    IL2CPP_REGISTER_METHOD(0x023275B0, app::IMessageSink*, GetClientChannelSinkChain, (app::String * url, app::Object* channel_data, app::String** object_uri))
    IL2CPP_REGISTER_METHODINFO(0x0472E850, RemotingServices_GetClientChannelSinkChain__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02327700, app::ClientActivatedIdentity*, CreateContextBoundObjectIdentity, (app::Type * object_type))
    IL2CPP_REGISTER_METHOD(0x02327900, app::ClientActivatedIdentity*, CreateClientActivatedServerIdentity, (app::MarshalByRefObject * real_object, app::Type* object_type, app::String* object_uri))
    IL2CPP_REGISTER_METHOD(0x02327A90, app::ServerIdentity*, CreateWellKnownServerIdentity, (app::Type * object_type, app::String* object_uri, app::WellKnownObjectMode__Enum mode))
    IL2CPP_REGISTER_METHOD(0x02327D30, void, RegisterServerIdentity, (app::ServerIdentity * identity))
    IL2CPP_REGISTER_METHODINFO(0x047761A0, RemotingServices_RegisterServerIdentity__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02327FB0, app::Object*, GetProxyForRemoteObject, (app::ObjRef * objref, app::Type* class_to_proxy))
    IL2CPP_REGISTER_METHOD(0x02328100, app::Object*, GetRemoteObject, (app::ObjRef * obj_ref, app::Type* proxy_type))
    IL2CPP_REGISTER_METHOD(0x023281C0, app::Byte__Array*, SerializeCallData, (app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x023284C0, app::Object*, DeserializeCallData, (app::Byte__Array * array))
    IL2CPP_REGISTER_METHOD(0x023287A0, app::Byte__Array*, SerializeExceptionData, (app::Exception * ex))
    IL2CPP_REGISTER_METHOD(0x02328980, void, RegisterInternalChannels, ())
    IL2CPP_REGISTER_METHOD(0x02328A10, void, DisposeIdentity, (app::Identity * ident))
    IL2CPP_REGISTER_METHOD(0x02328CB0, app::Identity*, GetMessageTargetIdentity, (app::IMessage * msg))
    IL2CPP_REGISTER_METHOD(0x02329030, void, SetMessageTargetIdentity, (app::IMessage * msg, app::Identity* ident))
    IL2CPP_REGISTER_METHOD(0x02329130, bool, UpdateOutArgObject, (app::ParameterInfo_1 * pi, app::Object* local, app::Object* remote))
    IL2CPP_REGISTER_METHOD(0x02329310, app::String*, GetNormalizedUri, (app::String * uri))
} // namespace app::classes::System::Runtime::Remoting::RemotingServices
