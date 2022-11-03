#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MapmakerUIItem {
        namespace {
            inline app::MapmakerUIItem__Class* type_info_ref = nullptr;
        }
        inline app::MapmakerUIItem__Class** type_info = &type_info_ref;
        inline app::MapmakerUIItem__Class* get_class() {
            return il2cpp::get_class<app::MapmakerUIItem__Class>(type_info, "", "MapmakerUIItem");
        }
        inline app::MapmakerUIItem* create() {
            return il2cpp::create_object<app::MapmakerUIItem>(get_class());
        }
    } // namespace MapmakerUIItem
} // namespace app::classes::types
