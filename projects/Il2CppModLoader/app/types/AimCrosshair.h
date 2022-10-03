#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AimCrosshair {
        namespace {
            app::AimCrosshair__Class* type_info_ref = nullptr;
        }
        app::AimCrosshair__Class** type_info = &type_info_ref;
        inline app::AimCrosshair__Class* get_class() {
            return il2cpp::get_class<app::AimCrosshair__Class>(type_info, "", "AimCrosshair");
        }
        inline app::AimCrosshair* create() {
            return il2cpp::create_object<app::AimCrosshair>(get_class());
        }
    } // namespace AimCrosshair
} // namespace app::classes::types
