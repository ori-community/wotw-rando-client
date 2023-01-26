#pragma once
#include <Modloader/app/structs/LegacyActivateDamageDealerAnimator.h>
#include <Modloader/app/structs/LegacyActivateDamageDealerAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyActivateDamageDealerAnimator {
        inline app::LegacyActivateDamageDealerAnimator__Class** type_info() {
            static app::LegacyActivateDamageDealerAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyActivateDamageDealerAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyActivateDamageDealerAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyActivateDamageDealerAnimator__Class>(type_info(), "", "LegacyActivateDamageDealerAnimator");
        }
        inline app::LegacyActivateDamageDealerAnimator* create() {
            return il2cpp::create_object<app::LegacyActivateDamageDealerAnimator>(get_class());
        }
    } // namespace LegacyActivateDamageDealerAnimator
} // namespace app::classes::types
