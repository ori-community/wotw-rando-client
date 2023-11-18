#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_UnityEngine_GameObject_System_Boolean_.h>
#include <Modloader/app/structs/GameObject.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_GameObject_System_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_UnityEngine_GameObject_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_UnityEngine_GameObject_System_Boolean_ * this_ptr, app::GameObject* key, bool value))
    IL2CPP_REGISTER_METHOD(0x02BC0F90, bool, TryGetValue, (app::Dictionary_2_UnityEngine_GameObject_System_Boolean_ * this_ptr, app::GameObject* key, bool* value))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_UnityEngine_GameObject_System_Boolean_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_GameObject_System_Boolean_
