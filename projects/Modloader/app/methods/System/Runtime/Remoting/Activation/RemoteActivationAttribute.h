#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RemoteActivationAttribute.h>
#include <Modloader/app/structs/IList.h>
#include <Modloader/app/structs/Context.h>
#include <Modloader/app/structs/IConstructionCallMessage.h>

namespace app::classes::System::Runtime::Remoting::Activation::RemoteActivationAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::RemoteActivationAttribute * this_ptr, app::IList* context_properties))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsContextOK, (app::RemoteActivationAttribute * this_ptr, app::Context* ctx, app::IConstructionCallMessage* ctor))
    IL2CPP_REGISTER_METHOD(0x01A99390, void, GetPropertiesForNewContext, (app::RemoteActivationAttribute * this_ptr, app::IConstructionCallMessage* ctor))
} // namespace app::classes::System::Runtime::Remoting::Activation::RemoteActivationAttribute
