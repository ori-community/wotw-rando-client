#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyGetAbilityPedestal_States__Enum {
        namespace {
            app::LegacyGetAbilityPedestal_States__Enum__Class* type_info_ref = nullptr;
        }
        app::LegacyGetAbilityPedestal_States__Enum__Class** type_info = &type_info_ref;
        inline app::LegacyGetAbilityPedestal_States__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyGetAbilityPedestal_States__Enum__Class>(type_info, "", "LegacyGetAbilityPedestal", "States");
        }
        inline app::LegacyGetAbilityPedestal_States__Enum* create() {
            return il2cpp::create_object<app::LegacyGetAbilityPedestal_States__Enum>(get_class());
        }
    } // namespace LegacyGetAbilityPedestal_States__Enum
} // namespace app::classes::types
