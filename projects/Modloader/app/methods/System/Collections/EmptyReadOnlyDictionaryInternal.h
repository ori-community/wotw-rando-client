#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EmptyReadOnlyDictionaryInternal.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ICollection.h>
#include <Modloader/app/structs/IDictionaryEnumerator.h>

namespace app::classes::System::Collections::EmptyReadOnlyDictionaryInternal {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EmptyReadOnlyDictionaryInternal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020210F0, app::IEnumerator*, IEnumerable_GetEnumerator, (app::EmptyReadOnlyDictionaryInternal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02021230, void, CopyTo, (app::EmptyReadOnlyDictionaryInternal * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04746020, EmptyReadOnlyDictionaryInternal_CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_Count, (app::EmptyReadOnlyDictionaryInternal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::Object*, get_SyncRoot, (app::EmptyReadOnlyDictionaryInternal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSynchronized, (app::EmptyReadOnlyDictionaryInternal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020213D0, app::Object*, get_Item, (app::EmptyReadOnlyDictionaryInternal * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHODINFO(0x04745DE0, EmptyReadOnlyDictionaryInternal_get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020214A0, void, set_Item, (app::EmptyReadOnlyDictionaryInternal * this_ptr, app::Object* key, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x04728740, EmptyReadOnlyDictionaryInternal_set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020216A0, app::ICollection*, get_Keys, (app::EmptyReadOnlyDictionaryInternal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02021740, app::ICollection*, get_Values, (app::EmptyReadOnlyDictionaryInternal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, Contains, (app::EmptyReadOnlyDictionaryInternal * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x020217E0, void, Add, (app::EmptyReadOnlyDictionaryInternal * this_ptr, app::Object* key, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x047203A8, EmptyReadOnlyDictionaryInternal_Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020219E0, void, Clear, (app::EmptyReadOnlyDictionaryInternal * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478ABD0, EmptyReadOnlyDictionaryInternal_Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, (app::EmptyReadOnlyDictionaryInternal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsFixedSize, (app::EmptyReadOnlyDictionaryInternal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02021A50, app::IDictionaryEnumerator*, GetEnumerator, (app::EmptyReadOnlyDictionaryInternal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02021B90, void, Remove, (app::EmptyReadOnlyDictionaryInternal * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHODINFO(0x04765778, EmptyReadOnlyDictionaryInternal_Remove__MethodInfo)
} // namespace app::classes::System::Collections::EmptyReadOnlyDictionaryInternal
