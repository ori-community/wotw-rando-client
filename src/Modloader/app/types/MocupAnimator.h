#pragma once
#include <Modloader/app/structs/MocupAnimator.h>
#include <Modloader/app/structs/MocupAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MocupAnimator {
        inline app::MocupAnimator__Class** type_info() {
            static app::MocupAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MocupAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MocupAnimator__Class* get_class() {
            return il2cpp::get_class<app::MocupAnimator__Class>(type_info(), "", "MocupAnimator");
        }
        inline app::MocupAnimator* create() {
            return il2cpp::create_object<app::MocupAnimator>(get_class());
        }
    } // namespace MocupAnimator
} // namespace app::classes::types
