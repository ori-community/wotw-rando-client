#pragma once
#include <Modloader/app/structs/UberVignettingAnimator.h>
#include <Modloader/app/structs/UberVignettingAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberVignettingAnimator {
        inline app::UberVignettingAnimator__Class** type_info() {
            static app::UberVignettingAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberVignettingAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberVignettingAnimator__Class* get_class() {
            return il2cpp::get_class<app::UberVignettingAnimator__Class>(type_info(), "", "UberVignettingAnimator");
        }
        inline app::UberVignettingAnimator* create() {
            return il2cpp::create_object<app::UberVignettingAnimator>(get_class());
        }
    } // namespace UberVignettingAnimator
} // namespace app::classes::types
