#pragma once
#include <Modloader/app/structs/MirroringAnimator.h>
#include <Modloader/app/structs/MirroringAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MirroringAnimator {
        inline app::MirroringAnimator__Class** type_info() {
            static app::MirroringAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MirroringAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MirroringAnimator__Class* get_class() {
            return il2cpp::get_class<app::MirroringAnimator__Class>(type_info(), "Moon.Timeline", "MirroringAnimator");
        }
        inline app::MirroringAnimator* create() {
            return il2cpp::create_object<app::MirroringAnimator>(get_class());
        }
    } // namespace MirroringAnimator
} // namespace app::classes::types
