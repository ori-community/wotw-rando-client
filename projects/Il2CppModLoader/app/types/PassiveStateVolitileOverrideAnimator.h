#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PassiveStateVolitileOverrideAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PassiveStateVolitileOverrideAnimator__Class** type_info;
        inline app::PassiveStateVolitileOverrideAnimator__Class* get_class() {
            return il2cpp::get_class<app::PassiveStateVolitileOverrideAnimator__Class>(type_info, "Moon.Timeline", "PassiveStateVolitileOverrideAnimator");
        }
        inline app::PassiveStateVolitileOverrideAnimator* create() {
            return il2cpp::create_object<app::PassiveStateVolitileOverrideAnimator>(get_class());
        }
    } // namespace PassiveStateVolitileOverrideAnimator
} // namespace app::classes::types
