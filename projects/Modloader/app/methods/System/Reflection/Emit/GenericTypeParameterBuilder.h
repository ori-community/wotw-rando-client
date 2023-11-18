#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Assembly.h>
#include <Modloader/app/structs/Binder.h>
#include <Modloader/app/structs/BindingFlags__Enum.h>
#include <Modloader/app/structs/CallingConventions__Enum.h>
#include <Modloader/app/structs/ConstructorInfo.h>
#include <Modloader/app/structs/ConstructorInfo__Array.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/EventInfo_1.h>
#include <Modloader/app/structs/EventInfo_1__Array.h>
#include <Modloader/app/structs/FieldInfo_1.h>
#include <Modloader/app/structs/FieldInfo_1__Array.h>
#include <Modloader/app/structs/GenericTypeParameterBuilder.h>
#include <Modloader/app/structs/MemberInfo_1__Array.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/MethodInfo_1__Array.h>
#include <Modloader/app/structs/Module.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/ParameterModifier__Array.h>
#include <Modloader/app/structs/PropertyInfo_1.h>
#include <Modloader/app/structs/PropertyInfo_1__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeAttributes__Enum.h>
#include <Modloader/app/structs/Type__Array.h>

namespace app::classes::System::Reflection::Emit::GenericTypeParameterBuilder {
    IL2CPP_REGISTER_METHOD(0x026804C0, app::Assembly*, get_Assembly, (app::GenericTypeParameterBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02680510, app::String*, get_AssemblyQualifiedName, (app::GenericTypeParameterBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02680560, app::Type*, get_BaseType, (app::GenericTypeParameterBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026805B0, app::String*, get_FullName, (app::GenericTypeParameterBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02680600, app::Module*, get_Module, (app::GenericTypeParameterBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02680650, app::String*, get_Name, (app::GenericTypeParameterBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026806A0, app::String*, get_Namespace, (app::GenericTypeParameterBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026806F0, app::Type*, GetElementType, (app::GenericTypeParameterBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02680740, app::Type*, get_UnderlyingSystemType, (app::GenericTypeParameterBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02680770, app::TypeAttributes__Enum, GetAttributeFlagsImpl, (app::GenericTypeParameterBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026807A0, app::ConstructorInfo*, GetConstructorImpl, (app::GenericTypeParameterBuilder * this_ptr, app::BindingFlags__Enum binding_attr, app::Binder* binder, app::CallingConventions__Enum call_convention, app::Type__Array* types, app::ParameterModifier__Array* modifiers))
    IL2CPP_REGISTER_METHOD(0x026807D0, app::ConstructorInfo__Array*, GetConstructors, (app::GenericTypeParameterBuilder * this_ptr, app::BindingFlags__Enum binding_attr))
    IL2CPP_REGISTER_METHOD(0x02680800, app::Object__Array*, GetCustomAttributes_1, (app::GenericTypeParameterBuilder * this_ptr, bool inherit))
    IL2CPP_REGISTER_METHOD(0x02680830, app::Object__Array*, GetCustomAttributes_2, (app::GenericTypeParameterBuilder * this_ptr, app::Type* attribute_type, bool inherit))
    IL2CPP_REGISTER_METHOD(0x02680860, app::EventInfo_1*, GetEvent, (app::GenericTypeParameterBuilder * this_ptr, app::String* name, app::BindingFlags__Enum binding_attr))
    IL2CPP_REGISTER_METHOD(0x02680890, app::EventInfo_1__Array*, GetEvents, (app::GenericTypeParameterBuilder * this_ptr, app::BindingFlags__Enum binding_attr))
    IL2CPP_REGISTER_METHOD(0x026808C0, app::FieldInfo_1*, GetField, (app::GenericTypeParameterBuilder * this_ptr, app::String* name, app::BindingFlags__Enum binding_attr))
    IL2CPP_REGISTER_METHOD(0x026808F0, app::FieldInfo_1__Array*, GetFields, (app::GenericTypeParameterBuilder * this_ptr, app::BindingFlags__Enum binding_attr))
    IL2CPP_REGISTER_METHOD(0x02680920, app::Type*, GetInterface, (app::GenericTypeParameterBuilder * this_ptr, app::String* name, bool ignore_case))
    IL2CPP_REGISTER_METHOD(0x02680950, app::Type__Array*, GetInterfaces, (app::GenericTypeParameterBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02680980, app::MemberInfo_1__Array*, GetMembers, (app::GenericTypeParameterBuilder * this_ptr, app::BindingFlags__Enum binding_attr))
    IL2CPP_REGISTER_METHOD(0x026809B0, app::MethodInfo_1*, GetMethodImpl, (app::GenericTypeParameterBuilder * this_ptr, app::String* name, app::BindingFlags__Enum binding_attr, app::Binder* binder, app::CallingConventions__Enum call_convention, app::Type__Array* types, app::ParameterModifier__Array* modifiers))
    IL2CPP_REGISTER_METHOD(0x026809E0, app::MethodInfo_1__Array*, GetMethods, (app::GenericTypeParameterBuilder * this_ptr, app::BindingFlags__Enum binding_attr))
    IL2CPP_REGISTER_METHOD(0x02680A10, app::Type*, GetNestedType, (app::GenericTypeParameterBuilder * this_ptr, app::String* name, app::BindingFlags__Enum binding_attr))
    IL2CPP_REGISTER_METHOD(0x02680A40, app::PropertyInfo_1__Array*, GetProperties, (app::GenericTypeParameterBuilder * this_ptr, app::BindingFlags__Enum binding_attr))
    IL2CPP_REGISTER_METHOD(0x02680A70, app::PropertyInfo_1*, GetPropertyImpl, (app::GenericTypeParameterBuilder * this_ptr, app::String* name, app::BindingFlags__Enum binding_attr, app::Binder* binder, app::Type* return_type, app::Type__Array* types, app::ParameterModifier__Array* modifiers))
    IL2CPP_REGISTER_METHOD(0x02680AA0, bool, HasElementTypeImpl, (app::GenericTypeParameterBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02680AD0, app::Object*, InvokeMember, (app::GenericTypeParameterBuilder * this_ptr, app::String* name, app::BindingFlags__Enum invoke_attr, app::Binder* binder, app::Object* target, app::Object__Array* args, app::ParameterModifier__Array* modifiers, app::CultureInfo* culture, app::String__Array* named_parameters))
    IL2CPP_REGISTER_METHOD(0x02680B00, bool, IsArrayImpl, (app::GenericTypeParameterBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02680B30, bool, IsByRefImpl, (app::GenericTypeParameterBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02680B60, bool, IsCOMObjectImpl, (app::GenericTypeParameterBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02680B90, bool, IsDefined, (app::GenericTypeParameterBuilder * this_ptr, app::Type* attribute_type, bool inherit))
    IL2CPP_REGISTER_METHOD(0x02680BC0, bool, IsPointerImpl, (app::GenericTypeParameterBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02680BF0, bool, IsPrimitiveImpl, (app::GenericTypeParameterBuilder * this_ptr))
} // namespace app::classes::System::Reflection::Emit::GenericTypeParameterBuilder
