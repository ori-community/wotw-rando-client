#pragma once
#include <Modloader/app/structs/InstantiateAnimator.h>
#include <Modloader/app/structs/InstantiateAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InstantiateAnimator {
        inline app::InstantiateAnimator__Class** type_info() {
            static app::InstantiateAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InstantiateAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InstantiateAnimator__Class* get_class() {
            return il2cpp::get_class<app::InstantiateAnimator__Class>(type_info(), "Moon.Timeline", "InstantiateAnimator");
        }
        inline app::InstantiateAnimator* create() {
            return il2cpp::create_object<app::InstantiateAnimator>(get_class());
        }
    } // namespace InstantiateAnimator
} // namespace app::classes::types
