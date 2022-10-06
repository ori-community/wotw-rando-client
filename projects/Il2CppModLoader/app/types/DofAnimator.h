#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DofAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DofAnimator__Class** type_info;
        inline app::DofAnimator__Class* get_class() {
            return il2cpp::get_class<app::DofAnimator__Class>(type_info, "", "DofAnimator");
        }
        inline app::DofAnimator* create() {
            return il2cpp::create_object<app::DofAnimator>(get_class());
        }
        inline app::DofAnimator__Array* create_array(int size) {
            return il2cpp::array_new<app::DofAnimator__Array>(get_class(), size);
        }
        inline app::DofAnimator__Array* create_array(const std::vector<app::DofAnimator*>& items) {
            return il2cpp::array_new<app::DofAnimator__Array>(get_class(), items);
        }
    } // namespace DofAnimator
} // namespace app::classes::types
