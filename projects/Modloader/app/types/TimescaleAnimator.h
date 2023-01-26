#pragma once
#include <Modloader/app/structs/TimescaleAnimator.h>
#include <Modloader/app/structs/TimescaleAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimescaleAnimator {
        inline app::TimescaleAnimator__Class** type_info() {
            static app::TimescaleAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimescaleAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimescaleAnimator__Class* get_class() {
            return il2cpp::get_class<app::TimescaleAnimator__Class>(type_info(), "Moon.Timeline", "TimescaleAnimator");
        }
        inline app::TimescaleAnimator* create() {
            return il2cpp::create_object<app::TimescaleAnimator>(get_class());
        }
    } // namespace TimescaleAnimator
} // namespace app::classes::types
