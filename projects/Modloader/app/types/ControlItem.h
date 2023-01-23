#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ControlItem__Class.h>
#include <Modloader/app/structs/ControlItem.h>
#include <Modloader/app/structs/ControlItem__Array.h>

namespace app::classes::types {
    namespace ControlItem {
        inline app::ControlItem__Class** type_info = (app::ControlItem__Class**)(modloader::win::memory::resolve_rva(0x04712AF8));
        inline app::ControlItem__Class* get_class() {
            return il2cpp::get_class<app::ControlItem__Class>(type_info, "", "ControlItem");
        }
        inline app::ControlItem* create() {
            return il2cpp::create_object<app::ControlItem>(get_class());
        }
        inline app::ControlItem__Array* create_array(int size) {
            return il2cpp::array_new<app::ControlItem__Array>(get_class(), size);
        }
        inline app::ControlItem__Array* create_array(const std::vector<app::ControlItem*>& items) {
            return il2cpp::array_new<app::ControlItem__Array>(get_class(), items);
        }
    } // namespace ControlItem
} // namespace app::classes::types
