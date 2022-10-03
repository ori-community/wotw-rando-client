#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HornBugSlamEffects {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HornBugSlamEffects__Class** type_info;
        inline app::HornBugSlamEffects__Class* get_class() {
            return il2cpp::get_class<app::HornBugSlamEffects__Class>(type_info, "", "HornBugSlamEffects");
        }
        inline app::HornBugSlamEffects* create() {
            return il2cpp::create_object<app::HornBugSlamEffects>(get_class());
        }
    } // namespace HornBugSlamEffects
} // namespace app::classes::types
