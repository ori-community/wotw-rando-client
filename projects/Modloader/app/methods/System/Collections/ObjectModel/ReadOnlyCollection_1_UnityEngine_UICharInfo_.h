#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_UnityEngine_UICharInfo_.h>
#include <Modloader/app/structs/IList_1_UnityEngine_UICharInfo_.h>
#include <Modloader/app/structs/UICharInfo.h>
#include <Modloader/app/structs/UICharInfo__Array.h>
#include <Modloader/app/structs/IEnumerator_1_UnityEngine_UICharInfo_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Array.h>

namespace app::classes::System::Collections::ObjectModel::ReadOnlyCollection_1_UnityEngine_UICharInfo_ {
    IL2CPP_REGISTER_METHOD(0x02B7DCF0, void, ctor, (app::ReadOnlyCollection_1_UnityEngine_UICharInfo_ * this_ptr, app::IList_1_UnityEngine_UICharInfo_* list))
    IL2CPP_REGISTER_METHOD(0x02B7DD20, int32_t, get_Count, (app::ReadOnlyCollection_1_UnityEngine_UICharInfo_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E41B30, app::UICharInfo, get_Item, (app::ReadOnlyCollection_1_UnityEngine_UICharInfo_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02E41C10, bool, Contains, (app::ReadOnlyCollection_1_UnityEngine_UICharInfo_ * this_ptr, app::UICharInfo value))
    IL2CPP_REGISTER_METHOD(0x02B7DEC0, void, CopyTo, (app::ReadOnlyCollection_1_UnityEngine_UICharInfo_ * this_ptr, app::UICharInfo__Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02B7DF30, app::IEnumerator_1_UnityEngine_UICharInfo_*, GetEnumerator, (app::ReadOnlyCollection_1_UnityEngine_UICharInfo_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E41C80, int32_t, IndexOf, (app::ReadOnlyCollection_1_UnityEngine_UICharInfo_ * this_ptr, app::UICharInfo value))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly, (app::ReadOnlyCollection_1_UnityEngine_UICharInfo_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E41B30, app::UICharInfo, System_Collections_Generic_IList_T__get_Item, (app::ReadOnlyCollection_1_UnityEngine_UICharInfo_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, System_Collections_Generic_IList_T__set_Item, (app::ReadOnlyCollection_1_UnityEngine_UICharInfo_ * this_ptr, int32_t index, app::UICharInfo value))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, System_Collections_Generic_ICollection_T__Add, (app::ReadOnlyCollection_1_UnityEngine_UICharInfo_ * this_ptr, app::UICharInfo value))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, System_Collections_Generic_ICollection_T__Clear, (app::ReadOnlyCollection_1_UnityEngine_UICharInfo_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, System_Collections_Generic_IList_T__Insert, (app::ReadOnlyCollection_1_UnityEngine_UICharInfo_ * this_ptr, int32_t index, app::UICharInfo value))
    IL2CPP_REGISTER_METHOD(0x02B7E070, bool, System_Collections_Generic_ICollection_T__Remove, (app::ReadOnlyCollection_1_UnityEngine_UICharInfo_ * this_ptr, app::UICharInfo value))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, System_Collections_Generic_IList_T__RemoveAt, (app::ReadOnlyCollection_1_UnityEngine_UICharInfo_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02ED1C80, app::IEnumerator*, IEnumerable_GetEnumerator, (app::ReadOnlyCollection_1_UnityEngine_UICharInfo_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::ReadOnlyCollection_1_UnityEngine_UICharInfo_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02ED1D10, app::Object*, ICollection_get_SyncRoot, (app::ReadOnlyCollection_1_UnityEngine_UICharInfo_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02ED1EA0, void, ICollection_CopyTo, (app::ReadOnlyCollection_1_UnityEngine_UICharInfo_ * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IList_get_IsFixedSize, (app::ReadOnlyCollection_1_UnityEngine_UICharInfo_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IList_get_IsReadOnly, (app::ReadOnlyCollection_1_UnityEngine_UICharInfo_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E423A0, app::Object*, IList_get_Item, (app::ReadOnlyCollection_1_UnityEngine_UICharInfo_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_set_Item, (app::ReadOnlyCollection_1_UnityEngine_UICharInfo_ * this_ptr, int32_t index, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02B7E070, int32_t, IList_Add, (app::ReadOnlyCollection_1_UnityEngine_UICharInfo_ * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_Clear, (app::ReadOnlyCollection_1_UnityEngine_UICharInfo_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E424B0, bool, IsCompatibleObject, (app::Object * value))
    IL2CPP_REGISTER_METHOD(0x02E425A0, bool, IList_Contains, (app::ReadOnlyCollection_1_UnityEngine_UICharInfo_ * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02E42680, int32_t, IList_IndexOf, (app::ReadOnlyCollection_1_UnityEngine_UICharInfo_ * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_Insert, (app::ReadOnlyCollection_1_UnityEngine_UICharInfo_ * this_ptr, int32_t index, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_Remove, (app::ReadOnlyCollection_1_UnityEngine_UICharInfo_ * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_RemoveAt, (app::ReadOnlyCollection_1_UnityEngine_UICharInfo_ * this_ptr, int32_t index))
} // namespace app::classes::System::Collections::ObjectModel::ReadOnlyCollection_1_UnityEngine_UICharInfo_
