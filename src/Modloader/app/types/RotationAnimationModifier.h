#pragma once
#include <Modloader/app/structs/RotationAnimationModifier.h>
#include <Modloader/app/structs/RotationAnimationModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RotationAnimationModifier {
        inline app::RotationAnimationModifier__Class** type_info() {
            static app::RotationAnimationModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RotationAnimationModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RotationAnimationModifier__Class* get_class() {
            return il2cpp::get_class<app::RotationAnimationModifier__Class>(type_info(), "", "RotationAnimationModifier");
        }
        inline app::RotationAnimationModifier* create() {
            return il2cpp::create_object<app::RotationAnimationModifier>(get_class());
        }
    } // namespace RotationAnimationModifier
} // namespace app::classes::types
