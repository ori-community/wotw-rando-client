#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConstructionLevelActivator.h>
#include <Modloader/app/structs/IActivator.h>
#include <Modloader/app/structs/IConstructionCallMessage.h>
#include <Modloader/app/structs/IConstructionReturnMessage.h>

namespace app::classes::System::Runtime::Remoting::Activation::ConstructionLevelActivator {
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::IActivator*, get_NextActivator, app::ConstructionLevelActivator* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01A990F0,
        app::IConstructionReturnMessage*,
        Activate,
        app::ConstructionLevelActivator* this_ptr,
        app::IConstructionCallMessage* msg
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ConstructionLevelActivator* this_ptr)
} // namespace app::classes::System::Runtime::Remoting::Activation::ConstructionLevelActivator
