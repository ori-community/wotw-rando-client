#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/CADMethodCallMessage.h>
#include <Modloader/app/structs/IMessage.h>
#include <Modloader/app/structs/IMethodCallMessage.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Runtime::Remoting::Messaging::CADMethodCallMessage {
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::String*, get_Uri, app::CADMethodCallMessage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0230C790, app::CADMethodCallMessage*, Create, app::IMessage* call_msg)
    IL2CPP_REGISTER_METHOD(0x0230CA20, void, ctor, app::CADMethodCallMessage* this_ptr, app::IMethodCallMessage* call_msg)
    IL2CPP_REGISTER_METHOD(0x0230CB90, app::ArrayList*, GetArguments, app::CADMethodCallMessage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0230CE00, app::Object__Array*, GetArgs, app::CADMethodCallMessage* this_ptr, app::ArrayList* args)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_PropertiesCount, app::CADMethodCallMessage* this_ptr)
} // namespace app::classes::System::Runtime::Remoting::Messaging::CADMethodCallMessage
