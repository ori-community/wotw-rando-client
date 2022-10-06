#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonAnimator__Class** type_info;
        inline app::MoonAnimator__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimator__Class>(type_info, "Moon", "MoonAnimator");
        }
        inline app::MoonAnimator* create() {
            return il2cpp::create_object<app::MoonAnimator>(get_class());
        }
        inline app::MoonAnimator__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonAnimator__Array>(get_class(), size);
        }
        inline app::MoonAnimator__Array* create_array(const std::vector<app::MoonAnimator*>& items) {
            return il2cpp::array_new<app::MoonAnimator__Array>(get_class(), items);
        }
    } // namespace MoonAnimator
} // namespace app::classes::types
