#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncResult.h>
#include <Modloader/app/structs/CallType__Enum.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/IDictionary.h>
#include <Modloader/app/structs/Identity.h>
#include <Modloader/app/structs/LogicalCallContext.h>
#include <Modloader/app/structs/MethodBase.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/MonoMethod.h>
#include <Modloader/app/structs/MonoMethodMessage.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Runtime::Remoting::Messaging::MonoMethodMessage {
    IL2CPP_REGISTER_METHOD(0x023180B0, void, InitMessage, app::MonoMethodMessage* this_ptr, app::MonoMethod* method_1, app::Object__Array* out_args)
    IL2CPP_REGISTER_METHOD(
        0x02318410,
        void,
        ctor,
        app::MonoMethodMessage* this_ptr,
        app::MethodInfo_1* minfo,
        app::Object__Array* in_args,
        app::Object__Array* out_args
    )
    IL2CPP_REGISTER_METHOD(0x023185B0, app::IDictionary*, get_Properties, app::MonoMethodMessage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02318710, int32_t, get_ArgCount, app::MonoMethodMessage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object__Array*, get_Args, app::MonoMethodMessage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::LogicalCallContext*, get_LogicalCallContext, app::MonoMethodMessage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_LogicalCallContext, app::MonoMethodMessage* this_ptr, app::LogicalCallContext* value)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::MethodBase*, get_MethodBase, app::MonoMethodMessage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02318750, app::String*, get_MethodName, app::MonoMethodMessage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02318870, app::Object*, get_MethodSignature, app::MonoMethodMessage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02318A00, app::String*, get_TypeName, app::MonoMethodMessage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::String*, get_Uri, app::MonoMethodMessage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_Uri, app::MonoMethodMessage* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x02318B40, app::Object*, GetArg, app::MonoMethodMessage* this_ptr, int32_t arg_num)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::Exception*, get_Exception, app::MonoMethodMessage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02318B80, int32_t, get_OutArgCount, app::MonoMethodMessage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02318BF0, app::Object__Array*, get_OutArgs, app::MonoMethodMessage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::Object*, get_ReturnValue, app::MonoMethodMessage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::Identity*, IInternalMessage_get_TargetIdentity, app::MonoMethodMessage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBD0, void, IInternalMessage_set_TargetIdentity, app::MonoMethodMessage* this_ptr, app::Identity* value)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::AsyncResult*, get_AsyncResult, app::MonoMethodMessage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02318DC0, app::CallType__Enum, get_CallType, app::MonoMethodMessage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02318F30, bool, NeedsOutProcessing, app::MonoMethodMessage* this_ptr, int32_t* out_count)
    IL2CPP_REGISTER_METHOD(0x02318FB0, void, cctor, )
} // namespace app::classes::System::Runtime::Remoting::Messaging::MonoMethodMessage
