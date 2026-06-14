#pragma once
#include <Modloader/app/structs/LookBlendAnimationControl.h>
#include <Modloader/app/structs/LookBlendAnimationControl__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LookBlendAnimationControl {
        inline app::LookBlendAnimationControl__Class** type_info() {
            static app::LookBlendAnimationControl__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LookBlendAnimationControl__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LookBlendAnimationControl__Class* get_class() {
            return il2cpp::get_class<app::LookBlendAnimationControl__Class>(type_info(), "", "LookBlendAnimationControl");
        }
        inline app::LookBlendAnimationControl* create() {
            return il2cpp::create_object<app::LookBlendAnimationControl>(get_class());
        }
    } // namespace LookBlendAnimationControl
} // namespace app::classes::types
