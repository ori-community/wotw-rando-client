#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Recoil {
        namespace {
            app::Recoil__Class* type_info_ref = nullptr;
        }
        app::Recoil__Class** type_info = &type_info_ref;
        inline app::Recoil__Class* get_class() {
            return il2cpp::get_class<app::Recoil__Class>(type_info, "RootMotion.FinalIK", "Recoil");
        }
        inline app::Recoil* create() {
            return il2cpp::create_object<app::Recoil>(get_class());
        }
    } // namespace Recoil
} // namespace app::classes::types
