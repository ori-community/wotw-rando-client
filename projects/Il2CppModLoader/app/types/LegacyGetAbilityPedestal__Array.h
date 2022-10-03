#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyGetAbilityPedestal__Array {
        namespace {
            app::LegacyGetAbilityPedestal__Array__Class* type_info_ref = nullptr;
        }
        app::LegacyGetAbilityPedestal__Array__Class** type_info = &type_info_ref;
        inline app::LegacyGetAbilityPedestal__Array__Class* get_class() {
            return il2cpp::get_class<app::LegacyGetAbilityPedestal__Array__Class>(type_info, "", "LegacyGetAbilityPedestal[]");
        }
        inline app::LegacyGetAbilityPedestal__Array* create() {
            return il2cpp::create_object<app::LegacyGetAbilityPedestal__Array>(get_class());
        }
    } // namespace LegacyGetAbilityPedestal__Array
} // namespace app::classes::types
