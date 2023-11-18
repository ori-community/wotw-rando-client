#pragma once
#include <Modloader/app/structs/SpiritShardEquipType__Enum.h>
#include <Modloader/app/structs/SpiritShardEquipType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritShardEquipType__Enum {
        inline app::SpiritShardEquipType__Enum__Class** type_info() {
            static app::SpiritShardEquipType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritShardEquipType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritShardEquipType__Enum__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardEquipType__Enum__Class>(type_info(), "", "SpiritShardEquipType");
        }
        inline app::SpiritShardEquipType__Enum* create() {
            return il2cpp::create_object<app::SpiritShardEquipType__Enum>(get_class());
        }
    } // namespace SpiritShardEquipType__Enum
} // namespace app::classes::types
