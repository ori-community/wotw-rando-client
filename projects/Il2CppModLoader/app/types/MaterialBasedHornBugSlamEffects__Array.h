#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MaterialBasedHornBugSlamEffects__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MaterialBasedHornBugSlamEffects__Array__Class** type_info;
        inline app::MaterialBasedHornBugSlamEffects__Array__Class* get_class() {
            return il2cpp::get_class<app::MaterialBasedHornBugSlamEffects__Array__Class>(type_info, "", "MaterialBasedHornBugSlamEffects[]");
        }
        inline app::MaterialBasedHornBugSlamEffects__Array* create() {
            return il2cpp::create_object<app::MaterialBasedHornBugSlamEffects__Array>(get_class());
        }
    } // namespace MaterialBasedHornBugSlamEffects__Array
} // namespace app::classes::types
