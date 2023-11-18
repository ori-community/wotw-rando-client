#pragma once
#include <Modloader/app/structs/BlendAnimationPostprocess.h>
#include <Modloader/app/structs/BlendAnimationPostprocess__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BlendAnimationPostprocess {
        inline app::BlendAnimationPostprocess__Class** type_info() {
            static app::BlendAnimationPostprocess__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BlendAnimationPostprocess__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BlendAnimationPostprocess__Class* get_class() {
            return il2cpp::get_class<app::BlendAnimationPostprocess__Class>(type_info(), "Moon", "BlendAnimationPostprocess");
        }
        inline app::BlendAnimationPostprocess* create() {
            return il2cpp::create_object<app::BlendAnimationPostprocess>(get_class());
        }
    } // namespace BlendAnimationPostprocess
} // namespace app::classes::types
