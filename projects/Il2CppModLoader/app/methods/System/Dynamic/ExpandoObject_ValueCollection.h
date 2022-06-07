#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Dynamic::ExpandoObject_ValueCollection {
    IL2CPP_REGISTER_METHOD(0x01F92B00, void, ctor, (app::ExpandoObject_ValueCollection * this_ptr, app::ExpandoObject * expando))
    IL2CPP_REGISTER_METHOD(0x01F92C10, void, CheckVersion, (app::ExpandoObject_ValueCollection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04720640, ExpandoObject_ValueCollection_CheckVersion__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F92CD0, void, Add, (app::ExpandoObject_ValueCollection * this_ptr, app::Object * item))
    IL2CPP_REGISTER_METHODINFO(0x04717908, ExpandoObject_ValueCollection_Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F92D10, void, Clear, (app::ExpandoObject_ValueCollection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476B038, ExpandoObject_ValueCollection_Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F92D50, bool, Contains, (app::ExpandoObject_ValueCollection * this_ptr, app::Object * item))
    IL2CPP_REGISTER_METHOD(0x01F92F30, void, CopyTo, (app::ExpandoObject_ValueCollection * this_ptr, app::Object__Array * array, int32_t array_index))
    IL2CPP_REGISTER_METHOD(0x01F93220, int32_t, get_Count, (app::ExpandoObject_ValueCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, (app::ExpandoObject_ValueCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F93240, bool, Remove, (app::ExpandoObject_ValueCollection * this_ptr, app::Object * item))
    IL2CPP_REGISTER_METHODINFO(0x0473BDD0, ExpandoObject_ValueCollection_Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F93280, app::IEnumerator_1_System_Object_ *, GetEnumerator, (app::ExpandoObject_ValueCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F93280, app::IEnumerator *, IEnumerable_GetEnumerator, (app::ExpandoObject_ValueCollection * this_ptr))
}
