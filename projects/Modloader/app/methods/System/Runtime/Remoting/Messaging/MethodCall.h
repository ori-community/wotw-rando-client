#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CADMethodCallMessage.h>
#include <Modloader/app/structs/IDictionary.h>
#include <Modloader/app/structs/IMethodMessage.h>
#include <Modloader/app/structs/Identity.h>
#include <Modloader/app/structs/LogicalCallContext.h>
#include <Modloader/app/structs/MethodBase.h>
#include <Modloader/app/structs/MethodCall.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Type__Array.h>

namespace app::classes::System::Runtime::Remoting::Messaging::MethodCall {
    IL2CPP_REGISTER_METHOD(0x0230EC70, void, ctor_1, app::MethodCall* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x02314970, void, ctor_2, app::MethodCall* this_ptr, app::CADMethodCallMessage* msg)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_3, app::MethodCall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02314B70, void, CopyFrom, app::MethodCall* this_ptr, app::IMethodMessage* call)
    IL2CPP_REGISTER_METHOD(0x02314CF0, void, InitMethodProperty, app::MethodCall* this_ptr, app::String* key, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x023150B0, void, GetObjectData, app::MethodCall* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x023153B0, int32_t, get_ArgCount, app::MethodCall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::Object__Array*, get_Args, app::MethodCall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023153D0, app::LogicalCallContext*, get_LogicalCallContext, app::MethodCall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02315520, app::MethodBase*, get_MethodBase, app::MethodCall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023155C0, app::String*, get_MethodName, app::MethodCall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02315600, app::Object*, get_MethodSignature, app::MethodCall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0230F550, app::IDictionary*, get_Properties, app::MethodCall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023157B0, void, InitDictionary, app::MethodCall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02315930, app::String*, get_TypeName, app::MethodCall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Uri, app::MethodCall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Uri, app::MethodCall* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, IInternalMessage_get_Uri, app::MethodCall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, IInternalMessage_set_Uri, app::MethodCall* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x02315990, app::Object*, GetArg, app::MethodCall* this_ptr, int32_t arg_num)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Init, app::MethodCall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023159D0, void, ResolveMethod, app::MethodCall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02316170, app::Type*, CastTo, app::MethodCall* this_ptr, app::String* client_type, app::Type* server_type)
    IL2CPP_REGISTER_METHOD(0x02316480, app::String*, GetTypeNameFromAssemblyQualifiedName, app::String* aqname)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::Identity*, IInternalMessage_get_TargetIdentity, app::MethodCall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBA00, void, IInternalMessage_set_TargetIdentity, app::MethodCall* this_ptr, app::Identity* value)
    IL2CPP_REGISTER_METHOD(0x02316590, app::Type__Array*, get_GenericArguments, app::MethodCall* this_ptr)
} // namespace app::classes::System::Runtime::Remoting::Messaging::MethodCall
