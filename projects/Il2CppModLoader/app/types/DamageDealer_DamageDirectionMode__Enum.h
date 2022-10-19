#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DamageDealer_DamageDirectionMode__Enum {
        namespace {
            inline app::DamageDealer_DamageDirectionMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::DamageDealer_DamageDirectionMode__Enum__Class** type_info = &type_info_ref;
        inline app::DamageDealer_DamageDirectionMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DamageDealer_DamageDirectionMode__Enum__Class>(type_info, "", "DamageDealer", "DamageDirectionMode");
        }
        inline app::DamageDealer_DamageDirectionMode__Enum* create() {
            return il2cpp::create_object<app::DamageDealer_DamageDirectionMode__Enum>(get_class());
        }
    } // namespace DamageDealer_DamageDirectionMode__Enum
} // namespace app::classes::types
