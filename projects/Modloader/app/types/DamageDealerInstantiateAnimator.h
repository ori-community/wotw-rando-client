#pragma once
#include <Modloader/app/structs/DamageDealerInstantiateAnimator.h>
#include <Modloader/app/structs/DamageDealerInstantiateAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamageDealerInstantiateAnimator {
        inline app::DamageDealerInstantiateAnimator__Class** type_info() {
            static app::DamageDealerInstantiateAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DamageDealerInstantiateAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DamageDealerInstantiateAnimator__Class* get_class() {
            return il2cpp::get_class<app::DamageDealerInstantiateAnimator__Class>(type_info(), "Moon.Timeline", "DamageDealerInstantiateAnimator");
        }
        inline app::DamageDealerInstantiateAnimator* create() {
            return il2cpp::create_object<app::DamageDealerInstantiateAnimator>(get_class());
        }
    } // namespace DamageDealerInstantiateAnimator
} // namespace app::classes::types
