#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ExpandoObject_KeyCollection.h>
#include <Modloader/app/structs/ExpandoObject.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_String_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::System::Dynamic::ExpandoObject_KeyCollection {
    IL2CPP_REGISTER_METHOD(0x01F8FDB0, void, ctor, (app::ExpandoObject_KeyCollection * this_ptr, app::ExpandoObject* expando))
    IL2CPP_REGISTER_METHOD(0x01F8FEC0, void, CheckVersion, (app::ExpandoObject_KeyCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F8FF80, void, Add, (app::ExpandoObject_KeyCollection * this_ptr, app::String* item))
    IL2CPP_REGISTER_METHOD(0x01F8FFC0, void, Clear, (app::ExpandoObject_KeyCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F90000, bool, Contains, (app::ExpandoObject_KeyCollection * this_ptr, app::String* item))
    IL2CPP_REGISTER_METHOD(0x01F90150, void, CopyTo, (app::ExpandoObject_KeyCollection * this_ptr, app::String__Array* array, int32_t array_index))
    IL2CPP_REGISTER_METHOD(0x01F90480, int32_t, get_Count, (app::ExpandoObject_KeyCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, (app::ExpandoObject_KeyCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F904A0, bool, Remove, (app::ExpandoObject_KeyCollection * this_ptr, app::String* item))
    IL2CPP_REGISTER_METHOD(0x01F904E0, app::IEnumerator_1_System_String_*, GetEnumerator, (app::ExpandoObject_KeyCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F904E0, app::IEnumerator*, IEnumerable_GetEnumerator, (app::ExpandoObject_KeyCollection * this_ptr))
} // namespace app::classes::System::Dynamic::ExpandoObject_KeyCollection
