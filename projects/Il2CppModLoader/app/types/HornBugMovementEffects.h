#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HornBugMovementEffects {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HornBugMovementEffects__Class** type_info;
        inline app::HornBugMovementEffects__Class* get_class() {
            return il2cpp::get_class<app::HornBugMovementEffects__Class>(type_info, "", "HornBugMovementEffects");
        }
        inline app::HornBugMovementEffects* create() {
            return il2cpp::create_object<app::HornBugMovementEffects>(get_class());
        }
    } // namespace HornBugMovementEffects
} // namespace app::classes::types
