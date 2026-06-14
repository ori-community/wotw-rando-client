#pragma once
#include <Modloader/app/structs/VerltPathAnimator.h>
#include <Modloader/app/structs/VerltPathAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VerltPathAnimator {
        inline app::VerltPathAnimator__Class** type_info() {
            static app::VerltPathAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VerltPathAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VerltPathAnimator__Class* get_class() {
            return il2cpp::get_class<app::VerltPathAnimator__Class>(type_info(), "Moon.Timeline", "VerltPathAnimator");
        }
        inline app::VerltPathAnimator* create() {
            return il2cpp::create_object<app::VerltPathAnimator>(get_class());
        }
    } // namespace VerltPathAnimator
} // namespace app::classes::types
