#pragma once
#include <Modloader/app/structs/ShoulderRotator.h>
#include <Modloader/app/structs/ShoulderRotator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShoulderRotator {
        inline app::ShoulderRotator__Class** type_info() {
            static app::ShoulderRotator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShoulderRotator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShoulderRotator__Class* get_class() {
            return il2cpp::get_class<app::ShoulderRotator__Class>(type_info(), "RootMotion.FinalIK", "ShoulderRotator");
        }
        inline app::ShoulderRotator* create() {
            return il2cpp::create_object<app::ShoulderRotator>(get_class());
        }
    } // namespace ShoulderRotator
} // namespace app::classes::types
