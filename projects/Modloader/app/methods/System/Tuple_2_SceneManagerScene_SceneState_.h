#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Tuple_2_SceneManagerScene_SceneState_.h>
#include <Modloader/app/structs/SceneManagerScene.h>
#include <Modloader/app/structs/SceneState__Enum.h>

namespace app::classes::System::Tuple_2_SceneManagerScene_SceneState_ {
    IL2CPP_REGISTER_METHOD(0x02A66D80, void, ctor, (app::Tuple_2_SceneManagerScene_SceneState_ * this_ptr, app::SceneManagerScene* item1, app::SceneState__Enum item2))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::SceneManagerScene*, get_Item1, (app::Tuple_2_SceneManagerScene_SceneState_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529FF0, app::SceneState__Enum, get_Item2, (app::Tuple_2_SceneManagerScene_SceneState_ * this_ptr))
} // namespace app::classes::System::Tuple_2_SceneManagerScene_SceneState_
