#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Func_2_System_Reflection_AssemblyName_System_Reflection_Assembly_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Assembly.h>
#include <Modloader/app/structs/AssemblyName.h>

namespace app::classes::System::Func_2_System_Reflection_AssemblyName_System_Reflection_Assembly_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_System_Reflection_AssemblyName_System_Reflection_Assembly_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x04766798, Func_2_System_Reflection_AssemblyName_System_Reflection_Assembly___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01852930, app::Assembly*, Invoke, (app::Func_2_System_Reflection_AssemblyName_System_Reflection_Assembly_ * this_ptr, app::AssemblyName* arg))
    IL2CPP_REGISTER_METHODINFO(0x0476CC88, Func_2_System_Reflection_AssemblyName_System_Reflection_Assembly__Invoke__MethodInfo)
} // namespace app::classes::System::Func_2_System_Reflection_AssemblyName_System_Reflection_Assembly_
