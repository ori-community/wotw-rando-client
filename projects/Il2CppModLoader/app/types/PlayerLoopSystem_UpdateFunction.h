#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerLoopSystem_UpdateFunction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayerLoopSystem_UpdateFunction__Class** type_info;
        inline app::PlayerLoopSystem_UpdateFunction__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerLoopSystem_UpdateFunction__Class>(type_info, "UnityEngine.Experimental.LowLevel", "PlayerLoopSystem", "UpdateFunction");
        }
        inline app::PlayerLoopSystem_UpdateFunction* create() {
            return il2cpp::create_object<app::PlayerLoopSystem_UpdateFunction>(get_class());
        }
    } // namespace PlayerLoopSystem_UpdateFunction
} // namespace app::classes::types
