#pragma once
#include <Modloader/app/structs/SpellUIShardEquipStatus.h>
#include <Modloader/app/structs/SpellUIShardEquipStatus__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpellUIShardEquipStatus {
        inline app::SpellUIShardEquipStatus__Class** type_info() {
            static app::SpellUIShardEquipStatus__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpellUIShardEquipStatus__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpellUIShardEquipStatus__Class* get_class() {
            return il2cpp::get_class<app::SpellUIShardEquipStatus__Class>(type_info(), "", "SpellUIShardEquipStatus");
        }
        inline app::SpellUIShardEquipStatus* create() {
            return il2cpp::create_object<app::SpellUIShardEquipStatus>(get_class());
        }
    } // namespace SpellUIShardEquipStatus
} // namespace app::classes::types
