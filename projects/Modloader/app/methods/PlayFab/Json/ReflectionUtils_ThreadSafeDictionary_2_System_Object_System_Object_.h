#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ICollection_1_System_Object_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_KeyValuePair_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Object___Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ReflectionUtils_ThreadSafeDictionaryValueFactory_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/ReflectionUtils_ThreadSafeDictionary_2_System_Object_System_Object_.h>

namespace app::classes::PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x01D15D10, app::ICollection_1_System_Object_*, get_Keys, (app::ReflectionUtils_ThreadSafeDictionary_2_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D15DD0, app::ICollection_1_System_Object_*, get_Values, (app::ReflectionUtils_ThreadSafeDictionary_2_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D15E00, app::Object*, get_Item, (app::ReflectionUtils_ThreadSafeDictionary_2_System_Object_System_Object_ * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x01D15E30, void, set_Item, (app::ReflectionUtils_ThreadSafeDictionary_2_System_Object_System_Object_ * this_ptr, app::Object* key, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01D15FC0, int32_t, get_Count, (app::ReflectionUtils_ThreadSafeDictionary_2_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D15FF0, bool, get_IsReadOnly, (app::ReflectionUtils_ThreadSafeDictionary_2_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D15670, void, ctor, (app::ReflectionUtils_ThreadSafeDictionary_2_System_Object_System_Object_ * this_ptr, app::ReflectionUtils_ThreadSafeDictionaryValueFactory_2_System_Object_System_Object_* value_factory))
    IL2CPP_REGISTER_METHOD(0x01D157C0, app::Object*, Get, (app::ReflectionUtils_ThreadSafeDictionary_2_System_Object_System_Object_ * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x01D15870, app::Object*, AddValue, (app::ReflectionUtils_ThreadSafeDictionary_2_System_Object_System_Object_ * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x01D15C90, void, Add_1, (app::ReflectionUtils_ThreadSafeDictionary_2_System_Object_System_Object_ * this_ptr, app::Object* key, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01D15CE0, bool, ContainsKey, (app::ReflectionUtils_ThreadSafeDictionary_2_System_Object_System_Object_ * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x01D15D40, bool, Remove_1, (app::ReflectionUtils_ThreadSafeDictionary_2_System_Object_System_Object_ * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x01D15D90, bool, TryGetValue, (app::ReflectionUtils_ThreadSafeDictionary_2_System_Object_System_Object_ * this_ptr, app::Object* key, app::Object** value))
    IL2CPP_REGISTER_METHOD(0x01D15E80, void, Add_2, (app::ReflectionUtils_ThreadSafeDictionary_2_System_Object_System_Object_ * this_ptr, app::KeyValuePair_2_System_Object_System_Object_ item))
    IL2CPP_REGISTER_METHOD(0x01D15ED0, void, Clear, (app::ReflectionUtils_ThreadSafeDictionary_2_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D15F20, bool, Contains, (app::ReflectionUtils_ThreadSafeDictionary_2_System_Object_System_Object_ * this_ptr, app::KeyValuePair_2_System_Object_System_Object_ item))
    IL2CPP_REGISTER_METHOD(0x01D15F70, void, CopyTo, (app::ReflectionUtils_ThreadSafeDictionary_2_System_Object_System_Object_ * this_ptr, app::KeyValuePair_2_System_Object_System_Object___Array* array, int32_t array_index))
    IL2CPP_REGISTER_METHOD(0x01D16040, bool, Remove_2, (app::ReflectionUtils_ThreadSafeDictionary_2_System_Object_System_Object_ * this_ptr, app::KeyValuePair_2_System_Object_System_Object_ item))
    IL2CPP_REGISTER_METHOD(0x01D16090, app::IEnumerator_1_KeyValuePair_2_System_Object_System_Object_*, GetEnumerator, (app::ReflectionUtils_ThreadSafeDictionary_2_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D16090, app::IEnumerator*, IEnumerable_GetEnumerator, (app::ReflectionUtils_ThreadSafeDictionary_2_System_Object_System_Object_ * this_ptr))
} // namespace app::classes::PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2_System_Object_System_Object_
