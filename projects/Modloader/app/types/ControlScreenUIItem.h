#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ControlScreenUIItem__Class.h>
#include <Modloader/app/structs/ControlScreenUIItem.h>

namespace app::classes::types {
    namespace ControlScreenUIItem {
        namespace {
            inline app::ControlScreenUIItem__Class* type_info_ref = nullptr;
        }
        inline app::ControlScreenUIItem__Class** type_info = &type_info_ref;
        inline app::ControlScreenUIItem__Class* get_class() {
            return il2cpp::get_class<app::ControlScreenUIItem__Class>(type_info, "", "ControlScreenUIItem");
        }
        inline app::ControlScreenUIItem* create() {
            return il2cpp::create_object<app::ControlScreenUIItem>(get_class());
        }
    } // namespace ControlScreenUIItem
} // namespace app::classes::types
