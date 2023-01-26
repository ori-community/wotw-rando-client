#pragma once
#include <Modloader/app/structs/RigidbodyParametersAnimator.h>
#include <Modloader/app/structs/RigidbodyParametersAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RigidbodyParametersAnimator {
        inline app::RigidbodyParametersAnimator__Class** type_info() {
            static app::RigidbodyParametersAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RigidbodyParametersAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RigidbodyParametersAnimator__Class* get_class() {
            return il2cpp::get_class<app::RigidbodyParametersAnimator__Class>(type_info(), "Moon.Timeline", "RigidbodyParametersAnimator");
        }
        inline app::RigidbodyParametersAnimator* create() {
            return il2cpp::create_object<app::RigidbodyParametersAnimator>(get_class());
        }
    } // namespace RigidbodyParametersAnimator
} // namespace app::classes::types
