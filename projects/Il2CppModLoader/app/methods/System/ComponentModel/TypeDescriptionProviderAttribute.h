#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::ComponentModel::TypeDescriptionProviderAttribute {
    IL2CPP_REGISTER_METHOD(0x02947290, void, ctor_1, (app::TypeDescriptionProviderAttribute * this_ptr, app::String* type_name))
    IL2CPP_REGISTER_METHODINFO(0x04712B78, TypeDescriptionProviderAttribute__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02947350, void, ctor_2, (app::TypeDescriptionProviderAttribute * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHODINFO(0x0471BFA8, TypeDescriptionProviderAttribute__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_TypeName, (app::TypeDescriptionProviderAttribute * this_ptr))
} // namespace app::classes::System::ComponentModel::TypeDescriptionProviderAttribute
