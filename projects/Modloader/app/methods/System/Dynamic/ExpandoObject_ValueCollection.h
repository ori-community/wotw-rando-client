#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ExpandoObject.h>
#include <Modloader/app/structs/ExpandoObject_ValueCollection.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>

namespace app::classes::System::Dynamic::ExpandoObject_ValueCollection {
    IL2CPP_REGISTER_METHOD(0x01F92B00, void, ctor, app::ExpandoObject_ValueCollection* this_ptr, app::ExpandoObject* expando)
    IL2CPP_REGISTER_METHOD(0x01F92C10, void, CheckVersion, app::ExpandoObject_ValueCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F92CD0, void, Add, app::ExpandoObject_ValueCollection* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x01F92D10, void, Clear, app::ExpandoObject_ValueCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F92D50, bool, Contains, app::ExpandoObject_ValueCollection* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x01F92F30, void, CopyTo, app::ExpandoObject_ValueCollection* this_ptr, app::Object__Array* array, int32_t array_index)
    IL2CPP_REGISTER_METHOD(0x01F93220, int32_t, get_Count, app::ExpandoObject_ValueCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, app::ExpandoObject_ValueCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F93240, bool, Remove, app::ExpandoObject_ValueCollection* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x01F93280, app::IEnumerator_1_System_Object_*, GetEnumerator, app::ExpandoObject_ValueCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F93280, app::IEnumerator*, IEnumerable_GetEnumerator, app::ExpandoObject_ValueCollection* this_ptr)
} // namespace app::classes::System::Dynamic::ExpandoObject_ValueCollection
