#pragma once
#include <Modloader/app/structs/ScaleAnimationModifier.h>
#include <Modloader/app/structs/ScaleAnimationModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScaleAnimationModifier {
        inline app::ScaleAnimationModifier__Class** type_info() {
            static app::ScaleAnimationModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScaleAnimationModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScaleAnimationModifier__Class* get_class() {
            return il2cpp::get_class<app::ScaleAnimationModifier__Class>(type_info(), "", "ScaleAnimationModifier");
        }
        inline app::ScaleAnimationModifier* create() {
            return il2cpp::create_object<app::ScaleAnimationModifier>(get_class());
        }
    } // namespace ScaleAnimationModifier
} // namespace app::classes::types
