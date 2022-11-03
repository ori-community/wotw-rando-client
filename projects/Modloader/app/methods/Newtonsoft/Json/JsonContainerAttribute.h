#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Newtonsoft::Json::JsonContainerAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Type*, get_ItemConverterType, (app::JsonContainerAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object__Array*, get_ItemConverterParameters, (app::JsonContainerAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::Type*, get_NamingStrategyType, (app::JsonContainerAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::Object__Array*, get_NamingStrategyParameters, (app::JsonContainerAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::NamingStrategy*, get_NamingStrategyInstance, (app::JsonContainerAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_NamingStrategyInstance, (app::JsonContainerAttribute * this_ptr, app::NamingStrategy* value))
} // namespace app::classes::Newtonsoft::Json::JsonContainerAttribute
