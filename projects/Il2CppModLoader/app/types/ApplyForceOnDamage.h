#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ApplyForceOnDamage {
        namespace {
            inline app::ApplyForceOnDamage__Class* type_info_ref = nullptr;
        }
        inline app::ApplyForceOnDamage__Class** type_info = &type_info_ref;
        inline app::ApplyForceOnDamage__Class* get_class() {
            return il2cpp::get_class<app::ApplyForceOnDamage__Class>(type_info, "", "ApplyForceOnDamage");
        }
        inline app::ApplyForceOnDamage* create() {
            return il2cpp::create_object<app::ApplyForceOnDamage>(get_class());
        }
    } // namespace ApplyForceOnDamage
} // namespace app::classes::types
