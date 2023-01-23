#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BinaryAssemblyInfo.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Assembly.h>

namespace app::classes::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor_1, (app::BinaryAssemblyInfo * this_ptr, app::String* assembly_string))
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor_2, (app::BinaryAssemblyInfo * this_ptr, app::String* assembly_string, app::Assembly* assembly))
    IL2CPP_REGISTER_METHOD(0x01D8C1C0, app::Assembly*, GetAssembly, (app::BinaryAssemblyInfo * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476D348, BinaryAssemblyInfo_GetAssembly__MethodInfo)
} // namespace app::classes::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo
