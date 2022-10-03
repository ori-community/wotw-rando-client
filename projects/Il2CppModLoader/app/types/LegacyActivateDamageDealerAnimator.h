#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyActivateDamageDealerAnimator {
        namespace {
            app::LegacyActivateDamageDealerAnimator__Class* type_info_ref = nullptr;
        }
        app::LegacyActivateDamageDealerAnimator__Class** type_info = &type_info_ref;
        inline app::LegacyActivateDamageDealerAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyActivateDamageDealerAnimator__Class>(type_info, "", "LegacyActivateDamageDealerAnimator");
        }
        inline app::LegacyActivateDamageDealerAnimator* create() {
            return il2cpp::create_object<app::LegacyActivateDamageDealerAnimator>(get_class());
        }
    } // namespace LegacyActivateDamageDealerAnimator
} // namespace app::classes::types
