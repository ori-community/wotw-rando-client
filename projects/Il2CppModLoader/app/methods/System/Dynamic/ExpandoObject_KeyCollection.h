#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Dynamic::ExpandoObject_KeyCollection {
    IL2CPP_REGISTER_METHOD(0x01F8FDB0, void, ctor, (app::ExpandoObject_KeyCollection * this_ptr, app::ExpandoObject * expando))
    IL2CPP_REGISTER_METHOD(0x01F8FEC0, void, CheckVersion, (app::ExpandoObject_KeyCollection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047423B0, ExpandoObject_KeyCollection_CheckVersion__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F8FF80, void, Add, (app::ExpandoObject_KeyCollection * this_ptr, app::String * item))
    IL2CPP_REGISTER_METHODINFO(0x047075D8, ExpandoObject_KeyCollection_Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F8FFC0, void, Clear, (app::ExpandoObject_KeyCollection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04797CE8, ExpandoObject_KeyCollection_Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F90000, bool, Contains, (app::ExpandoObject_KeyCollection * this_ptr, app::String * item))
    IL2CPP_REGISTER_METHOD(0x01F90150, void, CopyTo, (app::ExpandoObject_KeyCollection * this_ptr, app::String__Array * array, int32_t array_index))
    IL2CPP_REGISTER_METHOD(0x01F90480, int32_t, get_Count, (app::ExpandoObject_KeyCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, (app::ExpandoObject_KeyCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F904A0, bool, Remove, (app::ExpandoObject_KeyCollection * this_ptr, app::String * item))
    IL2CPP_REGISTER_METHODINFO(0x04712A98, ExpandoObject_KeyCollection_Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F904E0, app::IEnumerator_1_System_String_ *, GetEnumerator, (app::ExpandoObject_KeyCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F904E0, app::IEnumerator *, IEnumerable_GetEnumerator, (app::ExpandoObject_KeyCollection * this_ptr))
}
