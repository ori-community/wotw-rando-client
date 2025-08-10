#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparison_1_Object_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_Object_.h>
#include <Modloader/app/structs/IndexedSet_1_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/Predicate_1_Object_.h>

namespace app::classes::UnityEngine::UI::Collections::IndexedSet_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02ACD5F0, int32_t, get_Count, app::IndexedSet_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B1B670, bool, get_IsReadOnly, app::IndexedSet_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02ACD8A0, app::Object*, get_Item, app::IndexedSet_1_System_Object_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02ACD8D0, void, set_Item, app::IndexedSet_1_System_Object_* this_ptr, int32_t index, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02ACD120, void, ctor, app::IndexedSet_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02ACD320, void, Add, app::IndexedSet_1_System_Object_* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x02ACD3D0, bool, AddUnique, app::IndexedSet_1_System_Object_* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x02ACD4C0, bool, Remove, app::IndexedSet_1_System_Object_* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x02ACD540, app::IEnumerator_1_System_Object_*, GetEnumerator, app::IndexedSet_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02986CA0, app::IEnumerator*, IEnumerable_GetEnumerator, app::IndexedSet_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0271D0C0, void, Clear, app::IndexedSet_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02ACD590, bool, Contains, app::IndexedSet_1_System_Object_* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x02ACD5C0, void, CopyTo, app::IndexedSet_1_System_Object_* this_ptr, app::Object__Array* array, int32_t array_index)
    IL2CPP_REGISTER_METHOD(0x02ACD620, int32_t, IndexOf, app::IndexedSet_1_System_Object_* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x02ACD660, void, Insert, app::IndexedSet_1_System_Object_* this_ptr, int32_t index, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x02ACD6C0, void, RemoveAt, app::IndexedSet_1_System_Object_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02ACD9C0, void, RemoveAll, app::IndexedSet_1_System_Object_* this_ptr, app::Predicate_1_Object_* match)
    IL2CPP_REGISTER_METHOD(0x02ACDAD0, void, Sort, app::IndexedSet_1_System_Object_* this_ptr, app::Comparison_1_Object_* sort_layout_function)
} // namespace app::classes::UnityEngine::UI::Collections::IndexedSet_1_System_Object_
