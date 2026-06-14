#pragma once
#include <Modloader/app/structs/LegacyInstantiateAnimator.h>
#include <Modloader/app/structs/LegacyInstantiateAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyInstantiateAnimator {
        inline app::LegacyInstantiateAnimator__Class** type_info() {
            static app::LegacyInstantiateAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyInstantiateAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyInstantiateAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyInstantiateAnimator__Class>(type_info(), "", "LegacyInstantiateAnimator");
        }
        inline app::LegacyInstantiateAnimator* create() {
            return il2cpp::create_object<app::LegacyInstantiateAnimator>(get_class());
        }
    } // namespace LegacyInstantiateAnimator
} // namespace app::classes::types
