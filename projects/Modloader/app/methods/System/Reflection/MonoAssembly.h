#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Reflection::MonoAssembly {
    IL2CPP_REGISTER_METHOD(0x0268ED90, app::Type*, GetType, (app::MonoAssembly * this_ptr, app::String* name, bool throw_on_error, bool ignore_case))
    IL2CPP_REGISTER_METHODINFO(0x047033C0, MonoAssembly_GetType__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0268EEB0, app::Module*, GetModule, (app::MonoAssembly * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHODINFO(0x047936E8, MonoAssembly_GetModule__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0268F060, app::Module__Array*, GetModules, (app::MonoAssembly * this_ptr, bool get_resource_modules))
    IL2CPP_REGISTER_METHOD(0x02280FB0, void, ctor, (app::MonoAssembly * this_ptr))
} // namespace app::classes::System::Reflection::MonoAssembly
