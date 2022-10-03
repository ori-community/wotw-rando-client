#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DamageResolver {
        namespace {
            app::DamageResolver__Class* type_info_ref = nullptr;
        }
        app::DamageResolver__Class** type_info = &type_info_ref;
        inline app::DamageResolver__Class* get_class() {
            return il2cpp::get_class<app::DamageResolver__Class>(type_info, "Moon", "DamageResolver");
        }
        inline app::DamageResolver* create() {
            return il2cpp::create_object<app::DamageResolver>(get_class());
        }
    } // namespace DamageResolver
} // namespace app::classes::types
