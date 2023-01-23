#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EquipmentUIDetails_c__Class.h>
#include <Modloader/app/structs/EquipmentUIDetails_c.h>

namespace app::classes::types {
    namespace EquipmentUIDetails_c {
        inline app::EquipmentUIDetails_c__Class** type_info = (app::EquipmentUIDetails_c__Class**)(modloader::win::memory::resolve_rva(0x047483A0));
        inline app::EquipmentUIDetails_c__Class* get_class() {
            return il2cpp::get_nested_class<app::EquipmentUIDetails_c__Class>(type_info, "", "EquipmentUIDetails", "<>c");
        }
        inline app::EquipmentUIDetails_c* create() {
            return il2cpp::create_object<app::EquipmentUIDetails_c>(get_class());
        }
    } // namespace EquipmentUIDetails_c
} // namespace app::classes::types
