#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FPSAiming {
        namespace {
            inline app::FPSAiming__Class* type_info_ref = nullptr;
        }
        inline app::FPSAiming__Class** type_info = &type_info_ref;
        inline app::FPSAiming__Class* get_class() {
            return il2cpp::get_class<app::FPSAiming__Class>(type_info, "RootMotion.Demos", "FPSAiming");
        }
        inline app::FPSAiming* create() {
            return il2cpp::create_object<app::FPSAiming>(get_class());
        }
    } // namespace FPSAiming
} // namespace app::classes::types
