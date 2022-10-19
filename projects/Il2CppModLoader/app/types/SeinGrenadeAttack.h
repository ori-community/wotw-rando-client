#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinGrenadeAttack {
        namespace {
            inline app::SeinGrenadeAttack__Class* type_info_ref = nullptr;
        }
        inline app::SeinGrenadeAttack__Class** type_info = &type_info_ref;
        inline app::SeinGrenadeAttack__Class* get_class() {
            return il2cpp::get_class<app::SeinGrenadeAttack__Class>(type_info, "", "SeinGrenadeAttack");
        }
        inline app::SeinGrenadeAttack* create() {
            return il2cpp::create_object<app::SeinGrenadeAttack>(get_class());
        }
    } // namespace SeinGrenadeAttack
} // namespace app::classes::types
