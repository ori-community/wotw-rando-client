#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ReadOnlyCollection_1_ScenesManagerBehaviourUtility_SceneMetaAndData_.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_ScenesManagerBehaviourUtility_SceneMetaAndData_.h>
#include <Modloader/app/structs/IList_1_ScenesManagerBehaviourUtility_SceneMetaAndData_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ScenesManagerBehaviourUtility_SceneMetaAndData.h>
#include <Modloader/app/structs/ScenesManagerBehaviourUtility_SceneMetaAndData__Array.h>

namespace app::classes::System::Collections::ObjectModel::ReadOnlyCollection_1_ScenesManagerBehaviourUtility_SceneMetaAndData_ {
    IL2CPP_REGISTER_METHOD(0x02B7DCF0, void, ctor, (app::ReadOnlyCollection_1_ScenesManagerBehaviourUtility_SceneMetaAndData_ * this_ptr, app::IList_1_ScenesManagerBehaviourUtility_SceneMetaAndData_* list))
    IL2CPP_REGISTER_METHOD(0x02B7DD20, int32_t, get_Count, (app::ReadOnlyCollection_1_ScenesManagerBehaviourUtility_SceneMetaAndData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B7DD70, app::ScenesManagerBehaviourUtility_SceneMetaAndData, get_Item, (app::ReadOnlyCollection_1_ScenesManagerBehaviourUtility_SceneMetaAndData_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02B7DE50, bool, Contains, (app::ReadOnlyCollection_1_ScenesManagerBehaviourUtility_SceneMetaAndData_ * this_ptr, app::ScenesManagerBehaviourUtility_SceneMetaAndData value))
    IL2CPP_REGISTER_METHOD(0x02B7DEC0, void, CopyTo, (app::ReadOnlyCollection_1_ScenesManagerBehaviourUtility_SceneMetaAndData_ * this_ptr, app::ScenesManagerBehaviourUtility_SceneMetaAndData__Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02B7DF30, app::IEnumerator_1_ScenesManagerBehaviourUtility_SceneMetaAndData_*, GetEnumerator, (app::ReadOnlyCollection_1_ScenesManagerBehaviourUtility_SceneMetaAndData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B7DF90, int32_t, IndexOf, (app::ReadOnlyCollection_1_ScenesManagerBehaviourUtility_SceneMetaAndData_ * this_ptr, app::ScenesManagerBehaviourUtility_SceneMetaAndData value))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly, (app::ReadOnlyCollection_1_ScenesManagerBehaviourUtility_SceneMetaAndData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B7DD70, app::ScenesManagerBehaviourUtility_SceneMetaAndData, System_Collections_Generic_IList_T__get_Item, (app::ReadOnlyCollection_1_ScenesManagerBehaviourUtility_SceneMetaAndData_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, System_Collections_Generic_IList_T__set_Item, (app::ReadOnlyCollection_1_ScenesManagerBehaviourUtility_SceneMetaAndData_ * this_ptr, int32_t index, app::ScenesManagerBehaviourUtility_SceneMetaAndData value))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, System_Collections_Generic_ICollection_T__Add, (app::ReadOnlyCollection_1_ScenesManagerBehaviourUtility_SceneMetaAndData_ * this_ptr, app::ScenesManagerBehaviourUtility_SceneMetaAndData value))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, System_Collections_Generic_ICollection_T__Clear, (app::ReadOnlyCollection_1_ScenesManagerBehaviourUtility_SceneMetaAndData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, System_Collections_Generic_IList_T__Insert, (app::ReadOnlyCollection_1_ScenesManagerBehaviourUtility_SceneMetaAndData_ * this_ptr, int32_t index, app::ScenesManagerBehaviourUtility_SceneMetaAndData value))
    IL2CPP_REGISTER_METHOD(0x02B7E070, bool, System_Collections_Generic_ICollection_T__Remove, (app::ReadOnlyCollection_1_ScenesManagerBehaviourUtility_SceneMetaAndData_ * this_ptr, app::ScenesManagerBehaviourUtility_SceneMetaAndData value))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, System_Collections_Generic_IList_T__RemoveAt, (app::ReadOnlyCollection_1_ScenesManagerBehaviourUtility_SceneMetaAndData_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02EBDF50, app::IEnumerator*, IEnumerable_GetEnumerator, (app::ReadOnlyCollection_1_ScenesManagerBehaviourUtility_SceneMetaAndData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::ReadOnlyCollection_1_ScenesManagerBehaviourUtility_SceneMetaAndData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02EBDFE0, app::Object*, ICollection_get_SyncRoot, (app::ReadOnlyCollection_1_ScenesManagerBehaviourUtility_SceneMetaAndData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02EBE170, void, ICollection_CopyTo, (app::ReadOnlyCollection_1_ScenesManagerBehaviourUtility_SceneMetaAndData_ * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IList_get_IsFixedSize, (app::ReadOnlyCollection_1_ScenesManagerBehaviourUtility_SceneMetaAndData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IList_get_IsReadOnly, (app::ReadOnlyCollection_1_ScenesManagerBehaviourUtility_SceneMetaAndData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B7E6C0, app::Object*, IList_get_Item, (app::ReadOnlyCollection_1_ScenesManagerBehaviourUtility_SceneMetaAndData_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_set_Item, (app::ReadOnlyCollection_1_ScenesManagerBehaviourUtility_SceneMetaAndData_ * this_ptr, int32_t index, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02B7E070, int32_t, IList_Add, (app::ReadOnlyCollection_1_ScenesManagerBehaviourUtility_SceneMetaAndData_ * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_Clear, (app::ReadOnlyCollection_1_ScenesManagerBehaviourUtility_SceneMetaAndData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B7E7D0, bool, IsCompatibleObject, (app::Object * value))
    IL2CPP_REGISTER_METHOD(0x02B7E8D0, bool, IList_Contains, (app::ReadOnlyCollection_1_ScenesManagerBehaviourUtility_SceneMetaAndData_ * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02B7E9B0, int32_t, IList_IndexOf, (app::ReadOnlyCollection_1_ScenesManagerBehaviourUtility_SceneMetaAndData_ * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_Insert, (app::ReadOnlyCollection_1_ScenesManagerBehaviourUtility_SceneMetaAndData_ * this_ptr, int32_t index, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_Remove, (app::ReadOnlyCollection_1_ScenesManagerBehaviourUtility_SceneMetaAndData_ * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_RemoveAt, (app::ReadOnlyCollection_1_ScenesManagerBehaviourUtility_SceneMetaAndData_ * this_ptr, int32_t index))
} // namespace app::classes::System::Collections::ObjectModel::ReadOnlyCollection_1_ScenesManagerBehaviourUtility_SceneMetaAndData_
