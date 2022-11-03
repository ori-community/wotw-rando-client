#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Runtime::Remoting::Activation::AppDomainLevelActivator {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor, (app::AppDomainLevelActivator * this_ptr, app::String* activation_url, app::IActivator* next))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::IActivator*, get_NextActivator, (app::AppDomainLevelActivator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A98D20, app::IConstructionReturnMessage*, Activate, (app::AppDomainLevelActivator * this_ptr, app::IConstructionCallMessage* ctor_call))
    IL2CPP_REGISTER_METHODINFO(0x04714470, AppDomainLevelActivator_Activate__MethodInfo)
} // namespace app::classes::System::Runtime::Remoting::Activation::AppDomainLevelActivator
