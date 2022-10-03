#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyInstantiateAnimator {
        namespace {
            app::LegacyInstantiateAnimator__Class* type_info_ref = nullptr;
        }
        app::LegacyInstantiateAnimator__Class** type_info = &type_info_ref;
        inline app::LegacyInstantiateAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyInstantiateAnimator__Class>(type_info, "", "LegacyInstantiateAnimator");
        }
        inline app::LegacyInstantiateAnimator* create() {
            return il2cpp::create_object<app::LegacyInstantiateAnimator>(get_class());
        }
    } // namespace LegacyInstantiateAnimator
} // namespace app::classes::types
