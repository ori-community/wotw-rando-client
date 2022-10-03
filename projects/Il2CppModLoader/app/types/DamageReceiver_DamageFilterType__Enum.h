#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DamageReceiver_DamageFilterType__Enum {
        namespace {
            app::DamageReceiver_DamageFilterType__Enum__Class* type_info_ref = nullptr;
        }
        app::DamageReceiver_DamageFilterType__Enum__Class** type_info = &type_info_ref;
        inline app::DamageReceiver_DamageFilterType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DamageReceiver_DamageFilterType__Enum__Class>(type_info, "Moon", "DamageReceiver", "DamageFilterType");
        }
        inline app::DamageReceiver_DamageFilterType__Enum* create() {
            return il2cpp::create_object<app::DamageReceiver_DamageFilterType__Enum>(get_class());
        }
    } // namespace DamageReceiver_DamageFilterType__Enum
} // namespace app::classes::types
