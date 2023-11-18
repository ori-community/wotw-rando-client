#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ScriptableObject.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_UnityEngine_ScriptableObject_.h>

namespace app::classes::System::Collections::ObjectModel::ReadOnlyCollection_1_UnityEngine_ScriptableObject_ {
    IL2CPP_REGISTER_METHOD(0x02EC2580, app::ScriptableObject*, get_Item, (app::ReadOnlyCollection_1_UnityEngine_ScriptableObject_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02B7DD20, int32_t, get_Count, (app::ReadOnlyCollection_1_UnityEngine_ScriptableObject_ * this_ptr))
} // namespace app::classes::System::Collections::ObjectModel::ReadOnlyCollection_1_UnityEngine_ScriptableObject_
