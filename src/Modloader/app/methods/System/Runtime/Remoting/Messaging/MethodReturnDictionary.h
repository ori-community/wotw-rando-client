#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IMethodReturnMessage.h>
#include <Modloader/app/structs/MethodReturnDictionary.h>

namespace app::classes::System::Runtime::Remoting::Messaging::MethodReturnDictionary {
    IL2CPP_REGISTER_METHOD(0x02317BE0, void, ctor, app::MethodReturnDictionary* this_ptr, app::IMethodReturnMessage* message)
    IL2CPP_REGISTER_METHOD(0x02317D00, void, cctor, )
} // namespace app::classes::System::Runtime::Remoting::Messaging::MethodReturnDictionary
