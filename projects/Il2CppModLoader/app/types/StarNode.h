#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StarNode {
        inline app::StarNode__Class** type_info = (app::StarNode__Class**)(modloader::win::memory::resolve_rva(0x04790DD8));
        inline app::StarNode__Class* get_class() {
            return il2cpp::get_class<app::StarNode__Class>(type_info, "System.Xml.Schema", "StarNode");
        }
        inline app::StarNode* create() {
            return il2cpp::create_object<app::StarNode>(get_class());
        }
    } // namespace StarNode
} // namespace app::classes::types
