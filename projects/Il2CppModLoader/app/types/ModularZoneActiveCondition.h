#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ModularZoneActiveCondition {
        namespace {
            app::ModularZoneActiveCondition__Class* type_info_ref = nullptr;
        }
        app::ModularZoneActiveCondition__Class** type_info = &type_info_ref;
        inline app::ModularZoneActiveCondition__Class* get_class() {
            return il2cpp::get_class<app::ModularZoneActiveCondition__Class>(type_info, "", "ModularZoneActiveCondition");
        }
        inline app::ModularZoneActiveCondition* create() {
            return il2cpp::create_object<app::ModularZoneActiveCondition>(get_class());
        }
    } // namespace ModularZoneActiveCondition
} // namespace app::classes::types
