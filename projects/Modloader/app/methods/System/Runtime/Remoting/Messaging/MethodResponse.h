#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Runtime::Remoting::Messaging::MethodResponse {
    IL2CPP_REGISTER_METHOD(0x023165E0, void, ctor_1, (app::MethodResponse * this_ptr, app::Exception* e, app::IMethodCallMessage* msg))
    IL2CPP_REGISTER_METHOD(0x023166C0, void, ctor_2, (app::MethodResponse * this_ptr, app::Object* return_value, app::Object__Array* out_args, app::LogicalCallContext* call_ctx, app::IMethodCallMessage* msg))
    IL2CPP_REGISTER_METHOD(0x02316790, void, ctor_3, (app::MethodResponse * this_ptr, app::IMethodCallMessage* msg, app::CADMethodReturnMessage* retmsg))
    IL2CPP_REGISTER_METHOD(0x02310120, void, ctor_4, (app::MethodResponse * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x02316AA0, void, InitMethodProperty, (app::MethodResponse * this_ptr, app::String* key, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02316EC0, int32_t, get_ArgCount, (app::MethodResponse * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::Object__Array*, get_Args, (app::MethodResponse * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::Exception*, get_Exception, (app::MethodResponse * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02316ED0, app::LogicalCallContext*, get_LogicalCallContext, (app::MethodResponse * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02317020, app::MethodBase*, get_MethodBase, (app::MethodResponse * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02317250, app::String*, get_MethodName, (app::MethodResponse * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02317300, app::Object*, get_MethodSignature, (app::MethodResponse * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023173E0, app::Object__Array*, get_OutArgs, (app::MethodResponse * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02317590, app::IDictionary*, get_Properties, (app::MethodResponse * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::Object*, get_ReturnValue, (app::MethodResponse * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02317720, app::String*, get_TypeName, (app::MethodResponse * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023177D0, app::String*, get_Uri, (app::MethodResponse * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Uri, (app::MethodResponse * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x023177D0, app::String*, IInternalMessage_get_Uri, (app::MethodResponse * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, IInternalMessage_set_Uri, (app::MethodResponse * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x02317880, app::Object*, GetArg, (app::MethodResponse * this_ptr, int32_t arg_num))
    IL2CPP_REGISTER_METHOD(0x023178C0, void, GetObjectData, (app::MethodResponse * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::Identity*, IInternalMessage_get_TargetIdentity, (app::MethodResponse * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBD0, void, IInternalMessage_set_TargetIdentity, (app::MethodResponse * this_ptr, app::Identity* value))
} // namespace app::classes::System::Runtime::Remoting::Messaging::MethodResponse
