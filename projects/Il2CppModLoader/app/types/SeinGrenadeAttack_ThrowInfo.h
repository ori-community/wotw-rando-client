#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinGrenadeAttack_ThrowInfo {
        namespace {
            app::SeinGrenadeAttack_ThrowInfo__Class* type_info_ref = nullptr;
        }
        app::SeinGrenadeAttack_ThrowInfo__Class** type_info = &type_info_ref;
        inline app::SeinGrenadeAttack_ThrowInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinGrenadeAttack_ThrowInfo__Class>(type_info, "", "SeinGrenadeAttack", "ThrowInfo");
        }
        inline app::SeinGrenadeAttack_ThrowInfo* create() {
            return il2cpp::create_object<app::SeinGrenadeAttack_ThrowInfo>(get_class());
        }
    } // namespace SeinGrenadeAttack_ThrowInfo
} // namespace app::classes::types
