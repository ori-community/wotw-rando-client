#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IActivator.h>
#include <Modloader/app/structs/IConstructionCallMessage.h>
#include <Modloader/app/structs/IConstructionReturnMessage.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RemoteActivator.h>

namespace app::classes::System::Runtime::Remoting::Activation::RemoteActivator {
    IL2CPP_REGISTER_METHOD(0x01A99690, app::IConstructionReturnMessage*, Activate, app::RemoteActivator* this_ptr, app::IConstructionCallMessage* msg)
    IL2CPP_REGISTER_METHOD(0x01A999C0, app::Object*, InitializeLifetimeService, app::RemoteActivator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A999F0, app::IActivator*, get_NextActivator, app::RemoteActivator* this_ptr)
} // namespace app::classes::System::Runtime::Remoting::Activation::RemoteActivator
