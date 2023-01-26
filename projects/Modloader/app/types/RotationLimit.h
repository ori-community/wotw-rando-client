#pragma once
#include <Modloader/app/structs/RotationLimit.h>
#include <Modloader/app/structs/RotationLimit__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RotationLimit {
        inline app::RotationLimit__Class** type_info() {
            static app::RotationLimit__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RotationLimit__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RotationLimit__Class* get_class() {
            return il2cpp::get_class<app::RotationLimit__Class>(type_info(), "RootMotion.FinalIK", "RotationLimit");
        }
        inline app::RotationLimit* create() {
            return il2cpp::create_object<app::RotationLimit>(get_class());
        }
    } // namespace RotationLimit
} // namespace app::classes::types
