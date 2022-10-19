#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinShieldSpell {
        namespace {
            inline app::SeinShieldSpell__Class* type_info_ref = nullptr;
        }
        inline app::SeinShieldSpell__Class** type_info = &type_info_ref;
        inline app::SeinShieldSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinShieldSpell__Class>(type_info, "", "SeinShieldSpell");
        }
        inline app::SeinShieldSpell* create() {
            return il2cpp::create_object<app::SeinShieldSpell>(get_class());
        }
    } // namespace SeinShieldSpell
} // namespace app::classes::types
