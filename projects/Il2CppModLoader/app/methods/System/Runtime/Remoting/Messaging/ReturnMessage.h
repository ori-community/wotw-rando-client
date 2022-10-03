#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Runtime::Remoting::Messaging::ReturnMessage {
    IL2CPP_REGISTER_METHOD(0x02319710, void, ctor_1, (app::ReturnMessage * this_ptr, app::Object* ret, app::Object__Array* out_args, int32_t out_args_count, app::LogicalCallContext* call_ctx, app::IMethodCallMessage* mcm))
    IL2CPP_REGISTER_METHOD(0x02319800, void, ctor_2, (app::ReturnMessage * this_ptr, app::Exception* e, app::IMethodCallMessage* mcm))
    IL2CPP_REGISTER_METHOD(0x01A92400, int32_t, get_ArgCount, (app::ReturnMessage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object__Array*, get_Args, (app::ReturnMessage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023198C0, app::LogicalCallContext*, get_LogicalCallContext, (app::ReturnMessage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::MethodBase*, get_MethodBase, (app::ReturnMessage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02319A10, app::String*, get_MethodName, (app::ReturnMessage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02319A60, app::Object*, get_MethodSignature, (app::ReturnMessage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02319C10, app::IDictionary*, get_Properties, (app::ReturnMessage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02319D70, app::String*, get_TypeName, (app::ReturnMessage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String*, get_Uri, (app::ReturnMessage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_Uri, (app::ReturnMessage * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String*, IInternalMessage_get_Uri, (app::ReturnMessage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, IInternalMessage_set_Uri, (app::ReturnMessage * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x01A92420, app::Object*, GetArg, (app::ReturnMessage * this_ptr, int32_t arg_num))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::Exception*, get_Exception, (app::ReturnMessage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02319DE0, app::Object__Array*, get_OutArgs, (app::ReturnMessage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::Object*, get_ReturnValue, (app::ReturnMessage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::Identity*, IInternalMessage_get_TargetIdentity, (app::ReturnMessage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBB0, void, IInternalMessage_set_TargetIdentity, (app::ReturnMessage * this_ptr, app::Identity* value))
} // namespace app::classes::System::Runtime::Remoting::Messaging::ReturnMessage
