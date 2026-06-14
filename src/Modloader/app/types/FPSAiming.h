#pragma once
#include <Modloader/app/structs/FPSAiming.h>
#include <Modloader/app/structs/FPSAiming__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FPSAiming {
        inline app::FPSAiming__Class** type_info() {
            static app::FPSAiming__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FPSAiming__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FPSAiming__Class* get_class() {
            return il2cpp::get_class<app::FPSAiming__Class>(type_info(), "RootMotion.Demos", "FPSAiming");
        }
        inline app::FPSAiming* create() {
            return il2cpp::create_object<app::FPSAiming>(get_class());
        }
    } // namespace FPSAiming
} // namespace app::classes::types
