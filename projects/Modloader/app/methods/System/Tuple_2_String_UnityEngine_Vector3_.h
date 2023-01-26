#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Tuple_2_String_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::System::Tuple_2_String_UnityEngine_Vector3_ {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Item1, (app::Tuple_2_String_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0064EB90, app::Vector3, get_Item2, (app::Tuple_2_String_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A68AC0, void, ctor, (app::Tuple_2_String_UnityEngine_Vector3_ * this_ptr, app::String* item1, app::Vector3 item2))
} // namespace app::classes::System::Tuple_2_String_UnityEngine_Vector3_
