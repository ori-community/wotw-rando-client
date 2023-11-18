#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MethodAttributes__Enum.h>
#include <Modloader/app/structs/Binder.h>
#include <Modloader/app/structs/BindingFlags__Enum.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/MethodBuilder.h>
#include <Modloader/app/structs/MethodImplAttributes__Enum.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/ParameterInfo_1__Array.h>
#include <Modloader/app/structs/RuntimeMethodHandle.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Reflection::Emit::MethodBuilder {
    IL2CPP_REGISTER_METHOD(0x02680F90, app::MethodAttributes__Enum, get_Attributes, (app::MethodBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02680FE0, app::Type*, get_DeclaringType, (app::MethodBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02681030, app::String*, get_Name, (app::MethodBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02681080, app::ParameterInfo_1__Array*, GetParameters, (app::MethodBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026810D0, app::RuntimeMethodHandle, get_MethodHandle, (app::MethodBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02681100, app::Type*, get_ReflectedType, (app::MethodBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02681130, app::MethodInfo_1*, GetBaseDefinition, (app::MethodBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02681160, app::Object__Array*, GetCustomAttributes_1, (app::MethodBuilder * this_ptr, bool inherit))
    IL2CPP_REGISTER_METHOD(0x02681190, app::Object__Array*, GetCustomAttributes_2, (app::MethodBuilder * this_ptr, app::Type* attribute_type, bool inherit))
    IL2CPP_REGISTER_METHOD(0x026811C0, app::MethodImplAttributes__Enum, GetMethodImplementationFlags, (app::MethodBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026811F0, app::Object*, Invoke, (app::MethodBuilder * this_ptr, app::Object* obj, app::BindingFlags__Enum invoke_attr, app::Binder* binder, app::Object__Array* parameters, app::CultureInfo* culture))
    IL2CPP_REGISTER_METHOD(0x02681220, bool, IsDefined, (app::MethodBuilder * this_ptr, app::Type* attribute_type, bool inherit))
} // namespace app::classes::System::Reflection::Emit::MethodBuilder
