#pragma once
#include <Modloader/app/structs/ModularZoneActiveCondition.h>
#include <Modloader/app/structs/ModularZoneActiveCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ModularZoneActiveCondition {
        inline app::ModularZoneActiveCondition__Class** type_info() {
            static app::ModularZoneActiveCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ModularZoneActiveCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ModularZoneActiveCondition__Class* get_class() {
            return il2cpp::get_class<app::ModularZoneActiveCondition__Class>(type_info(), "", "ModularZoneActiveCondition");
        }
        inline app::ModularZoneActiveCondition* create() {
            return il2cpp::create_object<app::ModularZoneActiveCondition>(get_class());
        }
    } // namespace ModularZoneActiveCondition
} // namespace app::classes::types
