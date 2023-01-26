#pragma once
#include <Modloader/app/structs/RotationAnimatorB.h>
#include <Modloader/app/structs/RotationAnimatorB__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RotationAnimatorB {
        inline app::RotationAnimatorB__Class** type_info() {
            static app::RotationAnimatorB__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RotationAnimatorB__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RotationAnimatorB__Class* get_class() {
            return il2cpp::get_class<app::RotationAnimatorB__Class>(type_info(), "", "RotationAnimatorB");
        }
        inline app::RotationAnimatorB* create() {
            return il2cpp::create_object<app::RotationAnimatorB>(get_class());
        }
    } // namespace RotationAnimatorB
} // namespace app::classes::types
