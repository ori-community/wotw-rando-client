#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DamageDealerInstantiateAnimator {
        namespace {
            app::DamageDealerInstantiateAnimator__Class* type_info_ref = nullptr;
        }
        app::DamageDealerInstantiateAnimator__Class** type_info = &type_info_ref;
        inline app::DamageDealerInstantiateAnimator__Class* get_class() {
            return il2cpp::get_class<app::DamageDealerInstantiateAnimator__Class>(type_info, "Moon.Timeline", "DamageDealerInstantiateAnimator");
        }
        inline app::DamageDealerInstantiateAnimator* create() {
            return il2cpp::create_object<app::DamageDealerInstantiateAnimator>(get_class());
        }
    } // namespace DamageDealerInstantiateAnimator
} // namespace app::classes::types
