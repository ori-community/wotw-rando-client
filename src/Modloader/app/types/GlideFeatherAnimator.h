#pragma once
#include <Modloader/app/structs/GlideFeatherAnimator.h>
#include <Modloader/app/structs/GlideFeatherAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GlideFeatherAnimator {
        inline app::GlideFeatherAnimator__Class** type_info() {
            static app::GlideFeatherAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GlideFeatherAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GlideFeatherAnimator__Class* get_class() {
            return il2cpp::get_class<app::GlideFeatherAnimator__Class>(type_info(), "", "GlideFeatherAnimator");
        }
        inline app::GlideFeatherAnimator* create() {
            return il2cpp::create_object<app::GlideFeatherAnimator>(get_class());
        }
    } // namespace GlideFeatherAnimator
} // namespace app::classes::types
