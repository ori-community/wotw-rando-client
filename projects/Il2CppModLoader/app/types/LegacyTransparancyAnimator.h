#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyTransparancyAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LegacyTransparancyAnimator__Class** type_info;
        inline app::LegacyTransparancyAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyTransparancyAnimator__Class>(type_info, "", "LegacyTransparancyAnimator");
        }
        inline app::LegacyTransparancyAnimator* create() {
            return il2cpp::create_object<app::LegacyTransparancyAnimator>(get_class());
        }
        inline app::LegacyTransparancyAnimator__Array* create_array(int size) {
            return il2cpp::array_new<app::LegacyTransparancyAnimator__Array>(get_class(), size);
        }
        inline app::LegacyTransparancyAnimator__Array* create_array(const std::vector<app::LegacyTransparancyAnimator*>& items) {
            return il2cpp::array_new<app::LegacyTransparancyAnimator__Array>(get_class(), items);
        }
    } // namespace LegacyTransparancyAnimator
} // namespace app::classes::types
