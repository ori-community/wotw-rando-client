#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Reflection::TypeInfo {
    IL2CPP_REGISTER_METHOD(0x02698EE0, void, ctor, (app::TypeInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::TypeInfo*, IReflectableType_GetTypeInfo, (app::TypeInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02698F70, app::IEnumerable_1_System_Reflection_FieldInfo_*, get_DeclaredFields, (app::TypeInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02698F90, app::IEnumerable_1_System_Type_*, get_ImplementedInterfaces, (app::TypeInfo * this_ptr))
} // namespace app::classes::System::Reflection::TypeInfo
