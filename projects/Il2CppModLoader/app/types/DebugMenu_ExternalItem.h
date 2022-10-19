#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DebugMenu_ExternalItem {
        inline app::DebugMenu_ExternalItem__Class** type_info = (app::DebugMenu_ExternalItem__Class**)(modloader::win::memory::resolve_rva(0x04744F78));
        inline app::DebugMenu_ExternalItem__Class* get_class() {
            return il2cpp::get_nested_class<app::DebugMenu_ExternalItem__Class>(type_info, "", "DebugMenu", "ExternalItem");
        }
        inline app::DebugMenu_ExternalItem* create() {
            return il2cpp::create_object<app::DebugMenu_ExternalItem>(get_class());
        }
        inline app::DebugMenu_ExternalItem__Boxed* box(app::DebugMenu_ExternalItem value) {
            return il2cpp::box_value<app::DebugMenu_ExternalItem__Boxed>(get_class(), value);
        }
        inline app::DebugMenu_ExternalItem__Array* create_array(int size) {
            return il2cpp::array_new<app::DebugMenu_ExternalItem__Array>(get_class(), size);
        }
        inline app::DebugMenu_ExternalItem__Array* create_array(const std::vector<app::DebugMenu_ExternalItem>& items) {
            return il2cpp::array_new<app::DebugMenu_ExternalItem__Array>(get_class(), items);
        }
    } // namespace DebugMenu_ExternalItem
} // namespace app::classes::types
