#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ContextLevelActivator.h>
#include <Modloader/app/structs/IActivator.h>
#include <Modloader/app/structs/IConstructionCallMessage.h>
#include <Modloader/app/structs/IConstructionReturnMessage.h>

namespace app::classes::System::Runtime::Remoting::Activation::ContextLevelActivator {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::ContextLevelActivator * this_ptr, app::IActivator* next))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::IActivator*, get_NextActivator, (app::ContextLevelActivator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A99200, app::IConstructionReturnMessage*, Activate, (app::ContextLevelActivator * this_ptr, app::IConstructionCallMessage* ctor_call))
} // namespace app::classes::System::Runtime::Remoting::Activation::ContextLevelActivator
