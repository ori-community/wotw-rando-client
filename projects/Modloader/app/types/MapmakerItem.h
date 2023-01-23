#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MapmakerItem__Class.h>
#include <Modloader/app/structs/MapmakerItem.h>
#include <Modloader/app/structs/MapmakerItem__Array.h>

namespace app::classes::types {
    namespace MapmakerItem {
        inline app::MapmakerItem__Class** type_info = (app::MapmakerItem__Class**)(modloader::win::memory::resolve_rva(0x047426E8));
        inline app::MapmakerItem__Class* get_class() {
            return il2cpp::get_class<app::MapmakerItem__Class>(type_info, "", "MapmakerItem");
        }
        inline app::MapmakerItem* create() {
            return il2cpp::create_object<app::MapmakerItem>(get_class());
        }
        inline app::MapmakerItem__Array* create_array(int size) {
            return il2cpp::array_new<app::MapmakerItem__Array>(get_class(), size);
        }
        inline app::MapmakerItem__Array* create_array(const std::vector<app::MapmakerItem*>& items) {
            return il2cpp::array_new<app::MapmakerItem__Array>(get_class(), items);
        }
    } // namespace MapmakerItem
} // namespace app::classes::types
