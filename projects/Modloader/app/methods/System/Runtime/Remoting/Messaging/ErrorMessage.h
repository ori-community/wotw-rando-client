#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ErrorMessage.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/MethodBase.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IDictionary.h>
#include <Modloader/app/structs/LogicalCallContext.h>

namespace app::classes::System::Runtime::Remoting::Messaging::ErrorMessage {
    IL2CPP_REGISTER_METHOD(0x023104C0, void, ctor, (app::ErrorMessage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_ArgCount, (app::ErrorMessage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Object__Array*, get_Args, (app::ErrorMessage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::MethodBase*, get_MethodBase, (app::ErrorMessage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02310550, app::String*, get_MethodName, (app::ErrorMessage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Object*, get_MethodSignature, (app::ErrorMessage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::IDictionary*, get_Properties, (app::ErrorMessage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023105D0, app::String*, get_TypeName, (app::ErrorMessage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Uri, (app::ErrorMessage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Object*, GetArg, (app::ErrorMessage * this_ptr, int32_t arg_num))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::LogicalCallContext*, get_LogicalCallContext, (app::ErrorMessage * this_ptr))
} // namespace app::classes::System::Runtime::Remoting::Messaging::ErrorMessage
