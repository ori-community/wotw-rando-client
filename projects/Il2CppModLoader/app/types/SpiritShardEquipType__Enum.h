#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritShardEquipType__Enum {
        namespace {
            app::SpiritShardEquipType__Enum__Class* type_info_ref = nullptr;
        }
        app::SpiritShardEquipType__Enum__Class** type_info = &type_info_ref;
        inline app::SpiritShardEquipType__Enum__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardEquipType__Enum__Class>(type_info, "", "SpiritShardEquipType");
        }
        inline app::SpiritShardEquipType__Enum* create() {
            return il2cpp::create_object<app::SpiritShardEquipType__Enum>(get_class());
        }
    } // namespace SpiritShardEquipType__Enum
} // namespace app::classes::types
