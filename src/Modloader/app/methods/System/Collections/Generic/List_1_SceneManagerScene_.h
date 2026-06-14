#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_SceneManagerScene_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_SceneManagerScene_.h>
#include <Modloader/app/structs/SceneManagerScene.h>
#include <Modloader/app/structs/SceneManagerScene__Array.h>

namespace app::classes::System::Collections::Generic::List_1_SceneManagerScene_ {
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_SceneManagerScene_, GetEnumerator, app::List_1_SceneManagerScene_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::SceneManagerScene*, get_Item, app::List_1_SceneManagerScene_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_SceneManagerScene_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_SceneManagerScene_* this_ptr, app::SceneManagerScene* item)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, app::List_1_SceneManagerScene_* this_ptr, app::SceneManagerScene* item)
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::SceneManagerScene__Array*, ToArray, app::List_1_SceneManagerScene_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_1, app::List_1_SceneManagerScene_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_2, app::List_1_SceneManagerScene_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, app::List_1_SceneManagerScene_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_SceneManagerScene_
