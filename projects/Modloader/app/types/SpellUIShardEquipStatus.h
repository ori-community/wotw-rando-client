#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpellUIShardEquipStatus__Class.h>
#include <Modloader/app/structs/SpellUIShardEquipStatus.h>

namespace app::classes::types {
    namespace SpellUIShardEquipStatus {
        namespace {
            inline app::SpellUIShardEquipStatus__Class* type_info_ref = nullptr;
        }
        inline app::SpellUIShardEquipStatus__Class** type_info = &type_info_ref;
        inline app::SpellUIShardEquipStatus__Class* get_class() {
            return il2cpp::get_class<app::SpellUIShardEquipStatus__Class>(type_info, "", "SpellUIShardEquipStatus");
        }
        inline app::SpellUIShardEquipStatus* create() {
            return il2cpp::create_object<app::SpellUIShardEquipStatus>(get_class());
        }
    } // namespace SpellUIShardEquipStatus
} // namespace app::classes::types
