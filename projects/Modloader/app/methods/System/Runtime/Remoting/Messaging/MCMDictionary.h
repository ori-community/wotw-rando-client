#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MCMDictionary.h>
#include <Modloader/app/structs/IMethodMessage.h>

namespace app::classes::System::Runtime::Remoting::Messaging::MCMDictionary {
    IL2CPP_REGISTER_METHOD(0x023122B0, void, ctor, (app::MCMDictionary * this_ptr, app::IMethodMessage* message))
    IL2CPP_REGISTER_METHOD(0x02312370, void, cctor, ())
} // namespace app::classes::System::Runtime::Remoting::Messaging::MCMDictionary
