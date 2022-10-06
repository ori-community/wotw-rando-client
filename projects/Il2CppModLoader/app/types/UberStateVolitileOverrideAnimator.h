#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberStateVolitileOverrideAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberStateVolitileOverrideAnimator__Class** type_info;
        inline app::UberStateVolitileOverrideAnimator__Class* get_class() {
            return il2cpp::get_class<app::UberStateVolitileOverrideAnimator__Class>(type_info, "Moon.Timeline", "UberStateVolitileOverrideAnimator");
        }
        inline app::UberStateVolitileOverrideAnimator* create() {
            return il2cpp::create_object<app::UberStateVolitileOverrideAnimator>(get_class());
        }
        inline app::UberStateVolitileOverrideAnimator__Array* create_array(int size) {
            return il2cpp::array_new<app::UberStateVolitileOverrideAnimator__Array>(get_class(), size);
        }
        inline app::UberStateVolitileOverrideAnimator__Array* create_array(const std::vector<app::UberStateVolitileOverrideAnimator*>& items) {
            return il2cpp::array_new<app::UberStateVolitileOverrideAnimator__Array>(get_class(), items);
        }
    } // namespace UberStateVolitileOverrideAnimator
} // namespace app::classes::types
