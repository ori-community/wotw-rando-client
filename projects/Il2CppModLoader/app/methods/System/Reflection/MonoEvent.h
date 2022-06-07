#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Reflection::MonoEvent {
    IL2CPP_REGISTER_METHOD(0x0268FF20, app::MethodInfo_1 *, GetAddMethod, (app::MonoEvent * this_ptr, bool non_public))
    IL2CPP_REGISTER_METHOD(0x0268FFC0, app::MethodInfo_1 *, GetRaiseMethod, (app::MonoEvent * this_ptr, bool non_public))
    IL2CPP_REGISTER_METHOD(0x02690060, app::MethodInfo_1 *, GetRemoveMethod, (app::MonoEvent * this_ptr, bool non_public))
    IL2CPP_REGISTER_METHOD(0x026900F0, app::Type *, get_DeclaringType, (app::MonoEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02690120, app::Type *, get_ReflectedType, (app::MonoEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02690150, app::String *, get_Name, (app::MonoEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02690180, app::String *, ToString, (app::MonoEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02690240, bool, IsDefined, (app::MonoEvent * this_ptr, app::Type * attribute_type, bool inherit))
    IL2CPP_REGISTER_METHOD(0x02690300, app::Object__Array *, GetCustomAttributes_1, (app::MonoEvent * this_ptr, bool inherit))
    IL2CPP_REGISTER_METHOD(0x026903B0, app::Object__Array *, GetCustomAttributes_2, (app::MonoEvent * this_ptr, app::Type * attribute_type, bool inherit))
    IL2CPP_REGISTER_METHOD(0x0268FE80, app::IList_1_System_Reflection_CustomAttributeData_ *, GetCustomAttributesData, (app::MonoEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MonoEvent * this_ptr))
}
