#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Tuple_2_UnityEngine_GameObject_Moon_UberTransformFollow_.h>
#include <Modloader/app/structs/UberTransformFollow.h>

namespace app::classes::System::Tuple_2_UnityEngine_GameObject_Moon_UberTransformFollow_ {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::GameObject*, get_Item1, (app::Tuple_2_UnityEngine_GameObject_Moon_UberTransformFollow_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::UberTransformFollow*, get_Item2, (app::Tuple_2_UnityEngine_GameObject_Moon_UberTransformFollow_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019E0910, void, ctor, (app::Tuple_2_UnityEngine_GameObject_Moon_UberTransformFollow_ * this_ptr, app::GameObject* item1, app::UberTransformFollow* item2))
} // namespace app::classes::System::Tuple_2_UnityEngine_GameObject_Moon_UberTransformFollow_
