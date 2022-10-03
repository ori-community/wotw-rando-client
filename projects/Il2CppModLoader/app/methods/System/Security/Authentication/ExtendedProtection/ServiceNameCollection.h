#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Security::Authentication::ExtendedProtection::ServiceNameCollection {
    IL2CPP_REGISTER_METHOD(0x021BC8D0, void, ctor, (app::ServiceNameCollection * this_ptr, app::ICollection* items))
    IL2CPP_REGISTER_METHODINFO(0x0470A6F8, ServiceNameCollection__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021BCC00, void, AddIfNew, (app::ArrayList * new_service_names, app::String* service_name))
    IL2CPP_REGISTER_METHODINFO(0x04776AF8, ServiceNameCollection_AddIfNew__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021BCD10, bool, Contains, (app::String * search_service_name, app::ICollection* service_names))
    IL2CPP_REGISTER_METHOD(0x021BCF00, app::String*, NormalizeServiceName, (app::String * input_service_name))
    IL2CPP_REGISTER_METHOD(0x021BD390, bool, Match, (app::String * service_name1, app::String* service_name2))
} // namespace app::classes::System::Security::Authentication::ExtendedProtection::ServiceNameCollection
