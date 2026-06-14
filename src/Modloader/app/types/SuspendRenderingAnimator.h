#pragma once
#include <Modloader/app/structs/SuspendRenderingAnimator.h>
#include <Modloader/app/structs/SuspendRenderingAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SuspendRenderingAnimator {
        inline app::SuspendRenderingAnimator__Class** type_info() {
            static app::SuspendRenderingAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SuspendRenderingAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SuspendRenderingAnimator__Class* get_class() {
            return il2cpp::get_class<app::SuspendRenderingAnimator__Class>(type_info(), "Moon.Timeline", "SuspendRenderingAnimator");
        }
        inline app::SuspendRenderingAnimator* create() {
            return il2cpp::create_object<app::SuspendRenderingAnimator>(get_class());
        }
    } // namespace SuspendRenderingAnimator
} // namespace app::classes::types
