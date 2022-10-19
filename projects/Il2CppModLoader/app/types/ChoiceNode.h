#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ChoiceNode {
        inline app::ChoiceNode__Class** type_info = (app::ChoiceNode__Class**)(modloader::win::memory::resolve_rva(0x04761288));
        inline app::ChoiceNode__Class* get_class() {
            return il2cpp::get_class<app::ChoiceNode__Class>(type_info, "System.Xml.Schema", "ChoiceNode");
        }
        inline app::ChoiceNode* create() {
            return il2cpp::create_object<app::ChoiceNode>(get_class());
        }
    } // namespace ChoiceNode
} // namespace app::classes::types
