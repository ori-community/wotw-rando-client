#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Reflection::Emit::FieldBuilder {
    IL2CPP_REGISTER_METHOD(0x02680210, app::FieldAttributes__Enum, get_Attributes, (app::FieldBuilder * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047217D8, FieldBuilder_get_Attributes__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02680260, app::Type *, get_DeclaringType, (app::FieldBuilder * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047277D8, FieldBuilder_get_DeclaringType__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x026802B0, app::Type *, get_FieldType, (app::FieldBuilder * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04700D40, FieldBuilder_get_FieldType__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02680300, app::String *, get_Name, (app::FieldBuilder * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04777698, FieldBuilder_get_Name__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02680350, app::Object *, GetValue, (app::FieldBuilder * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHODINFO(0x04756A78, FieldBuilder_GetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x026803A0, app::RuntimeFieldHandle, get_FieldHandle, (app::FieldBuilder * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474AD48, FieldBuilder_get_FieldHandle__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x026803D0, app::Type *, get_ReflectedType, (app::FieldBuilder * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474DD78, FieldBuilder_get_ReflectedType__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02680400, app::Object__Array *, GetCustomAttributes_1, (app::FieldBuilder * this_ptr, bool inherit))
    IL2CPP_REGISTER_METHODINFO(0x0476A2A0, FieldBuilder_GetCustomAttributes__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02680430, app::Object__Array *, GetCustomAttributes_2, (app::FieldBuilder * this_ptr, app::Type * attribute_type, bool inherit))
    IL2CPP_REGISTER_METHODINFO(0x047637E0, FieldBuilder_GetCustomAttributes_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02680460, bool, IsDefined, (app::FieldBuilder * this_ptr, app::Type * attribute_type, bool inherit))
    IL2CPP_REGISTER_METHODINFO(0x0470EFE8, FieldBuilder_IsDefined__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02680490, void, SetValue, (app::FieldBuilder * this_ptr, app::Object * obj, app::Object * val, app::BindingFlags__Enum invoke_attr, app::Binder * binder, app::CultureInfo * culture))
    IL2CPP_REGISTER_METHODINFO(0x0472C758, FieldBuilder_SetValue__MethodInfo)
}
