#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AimPoser {
        namespace {
            app::AimPoser__Class* type_info_ref = nullptr;
        }
        app::AimPoser__Class** type_info = &type_info_ref;
        inline app::AimPoser__Class* get_class() {
            return il2cpp::get_class<app::AimPoser__Class>(type_info, "RootMotion.FinalIK", "AimPoser");
        }
        inline app::AimPoser* create() {
            return il2cpp::create_object<app::AimPoser>(get_class());
        }
    } // namespace AimPoser
} // namespace app::classes::types
