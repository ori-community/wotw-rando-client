#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IConstructionReturnMessage.h>
#include <Modloader/app/structs/RemoteActivator.h>
#include <Modloader/app/structs/IConstructionCallMessage.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IActivator.h>

namespace app::classes::System::Runtime::Remoting::Activation::RemoteActivator {
    IL2CPP_REGISTER_METHOD(0x01A99690, app::IConstructionReturnMessage*, Activate, (app::RemoteActivator * this_ptr, app::IConstructionCallMessage* msg))
    IL2CPP_REGISTER_METHODINFO(0x0477FDF8, RemoteActivator_Activate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A999C0, app::Object*, InitializeLifetimeService, (app::RemoteActivator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A999F0, app::IActivator*, get_NextActivator, (app::RemoteActivator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471D9A0, RemoteActivator_get_NextActivator__MethodInfo)
} // namespace app::classes::System::Runtime::Remoting::Activation::RemoteActivator
