#pragma once
#include <Modloader/app/structs/OriAnimator.h>
#include <Modloader/app/structs/OriAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OriAnimator {
        inline app::OriAnimator__Class** type_info() {
            static app::OriAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OriAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OriAnimator__Class* get_class() {
            return il2cpp::get_class<app::OriAnimator__Class>(type_info(), "", "OriAnimator");
        }
        inline app::OriAnimator* create() {
            return il2cpp::create_object<app::OriAnimator>(get_class());
        }
    } // namespace OriAnimator
} // namespace app::classes::types
