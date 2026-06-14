#pragma once
#include <Modloader/app/structs/UberPostAnimator.h>
#include <Modloader/app/structs/UberPostAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPostAnimator {
        inline app::UberPostAnimator__Class** type_info() {
            static app::UberPostAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberPostAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberPostAnimator__Class* get_class() {
            return il2cpp::get_class<app::UberPostAnimator__Class>(type_info(), "", "UberPostAnimator");
        }
        inline app::UberPostAnimator* create() {
            return il2cpp::create_object<app::UberPostAnimator>(get_class());
        }
    } // namespace UberPostAnimator
} // namespace app::classes::types
