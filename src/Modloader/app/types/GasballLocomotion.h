#pragma once
#include <Modloader/app/structs/GasballLocomotion.h>
#include <Modloader/app/structs/GasballLocomotion__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GasballLocomotion {
        inline app::GasballLocomotion__Class** type_info() {
            static app::GasballLocomotion__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GasballLocomotion__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GasballLocomotion__Class* get_class() {
            return il2cpp::get_class<app::GasballLocomotion__Class>(type_info(), "Moon", "GasballLocomotion");
        }
        inline app::GasballLocomotion* create() {
            return il2cpp::create_object<app::GasballLocomotion>(get_class());
        }
    } // namespace GasballLocomotion
} // namespace app::classes::types
