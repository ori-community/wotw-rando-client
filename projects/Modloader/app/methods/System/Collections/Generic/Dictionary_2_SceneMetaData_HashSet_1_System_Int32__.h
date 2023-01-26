#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_SceneMetaData_HashSet_1_System_Int32_.h>
#include <Modloader/app/structs/HashSet_1_System_Int32_.h>
#include <Modloader/app/structs/SceneMetaData.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_SceneMetaData_HashSet_1_System_Int32__ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_SceneMetaData_HashSet_1_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_SceneMetaData_HashSet_1_System_Int32_ * this_ptr, app::SceneMetaData* key))
    IL2CPP_REGISTER_METHOD(0x02BD24D0, app::HashSet_1_System_Int32_*, get_Item, (app::Dictionary_2_SceneMetaData_HashSet_1_System_Int32_ * this_ptr, app::SceneMetaData* key))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_SceneMetaData_HashSet_1_System_Int32_ * this_ptr, app::SceneMetaData* key, app::HashSet_1_System_Int32_* value))
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_SceneMetaData_HashSet_1_System_Int32_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_SceneMetaData_HashSet_1_System_Int32__
