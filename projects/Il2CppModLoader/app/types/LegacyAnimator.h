#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyAnimator {
        namespace {
            inline app::LegacyAnimator__Class* type_info_ref = nullptr;
        }
        inline app::LegacyAnimator__Class** type_info = &type_info_ref;
        inline app::LegacyAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyAnimator__Class>(type_info, "", "LegacyAnimator");
        }
        inline app::LegacyAnimator* create() {
            return il2cpp::create_object<app::LegacyAnimator>(get_class());
        }
        inline app::LegacyAnimator__Array* create_array(int size) {
            return il2cpp::array_new<app::LegacyAnimator__Array>(get_class(), size);
        }
        inline app::LegacyAnimator__Array* create_array(const std::vector<app::LegacyAnimator*>& items) {
            return il2cpp::array_new<app::LegacyAnimator__Array>(get_class(), items);
        }
    } // namespace LegacyAnimator
} // namespace app::classes::types
