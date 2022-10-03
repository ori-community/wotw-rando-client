#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Runtime::Remoting::Messaging::ConstructionCall {
    IL2CPP_REGISTER_METHOD(0x0230EC20, void, ctor_1, (app::ConstructionCall * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x0230EC70, void, ctor_2, (app::ConstructionCall * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x0230ED20, void, InitDictionary, (app::ConstructionCall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00739A80, bool, get_IsContextOk, (app::ConstructionCall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0094FCE0, void, set_IsContextOk, (app::ConstructionCall * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0230EF20, app::Type*, get_ActivationType, (app::ConstructionCall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::String*, get_ActivationTypeName, (app::ConstructionCall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::IActivator*, get_Activator, (app::ConstructionCall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBB0, void, set_Activator, (app::ConstructionCall * this_ptr, app::IActivator* value))
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::Object__Array*, get_CallSiteActivationAttributes, (app::ConstructionCall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBD0, void, SetActivationAttributes, (app::ConstructionCall * this_ptr, app::Object__Array* attributes))
    IL2CPP_REGISTER_METHOD(0x0230F030, app::IList*, get_ContextProperties, (app::ConstructionCall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0230F190, void, InitMethodProperty, (app::ConstructionCall * this_ptr, app::String* key, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x0230F400, void, GetObjectData, (app::ConstructionCall * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x0230F550, app::IDictionary*, get_Properties, (app::ConstructionCall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::RemotingProxy*, get_SourceProxy, (app::ConstructionCall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC70, void, set_SourceProxy, (app::ConstructionCall * this_ptr, app::RemotingProxy* value))
} // namespace app::classes::System::Runtime::Remoting::Messaging::ConstructionCall
