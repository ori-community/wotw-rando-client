#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_SceneMetaData_HashSet_1_System_Int32_.h>
#include <Modloader/app/structs/SceneMetaData.h>
#include <Modloader/app/structs/HashSet_1_System_Int32_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_SceneMetaData_HashSet_1_System_Int32__ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_SceneMetaData_HashSet_1_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04759888, Dictionary_2_SceneMetaData_HashSet_1_System_Int32___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_SceneMetaData_HashSet_1_System_Int32_ * this_ptr, app::SceneMetaData* key))
    IL2CPP_REGISTER_METHODINFO(0x0472F9D8, Dictionary_2_SceneMetaData_HashSet_1_System_Int32__ContainsKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BD24D0, app::HashSet_1_System_Int32_*, get_Item, (app::Dictionary_2_SceneMetaData_HashSet_1_System_Int32_ * this_ptr, app::SceneMetaData* key))
    IL2CPP_REGISTER_METHODINFO(0x04751690, Dictionary_2_SceneMetaData_HashSet_1_System_Int32__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_SceneMetaData_HashSet_1_System_Int32_ * this_ptr, app::SceneMetaData* key, app::HashSet_1_System_Int32_* value))
    IL2CPP_REGISTER_METHODINFO(0x04795A80, Dictionary_2_SceneMetaData_HashSet_1_System_Int32__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_SceneMetaData_HashSet_1_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472FD78, Dictionary_2_SceneMetaData_HashSet_1_System_Int32__Clear__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_SceneMetaData_HashSet_1_System_Int32__
