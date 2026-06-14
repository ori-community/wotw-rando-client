#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/CADMethodReturnMessage.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/IMessage.h>
#include <Modloader/app/structs/IMethodReturnMessage.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>

namespace app::classes::System::Runtime::Remoting::Messaging::CADMethodReturnMessage {
    IL2CPP_REGISTER_METHOD(0x0230D870, app::CADMethodReturnMessage*, Create, app::IMessage* call_msg)
    IL2CPP_REGISTER_METHOD(0x0230D9F0, void, ctor, app::CADMethodReturnMessage* this_ptr, app::IMethodReturnMessage* ret_msg)
    IL2CPP_REGISTER_METHOD(0x0230DDB0, app::ArrayList*, GetArguments, app::CADMethodReturnMessage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0230CE00, app::Object__Array*, GetArgs, app::CADMethodReturnMessage* this_ptr, app::ArrayList* args)
    IL2CPP_REGISTER_METHOD(0x0230E020, app::Object*, GetReturnValue, app::CADMethodReturnMessage* this_ptr, app::ArrayList* args)
    IL2CPP_REGISTER_METHOD(0x0230E030, app::Exception*, GetException, app::CADMethodReturnMessage* this_ptr, app::ArrayList* args)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_PropertiesCount, app::CADMethodReturnMessage* this_ptr)
} // namespace app::classes::System::Runtime::Remoting::Messaging::CADMethodReturnMessage
