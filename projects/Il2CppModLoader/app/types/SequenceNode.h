#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SequenceNode {
        inline app::SequenceNode__Class** type_info = (app::SequenceNode__Class**)(modloader::win::memory::resolve_rva(0x0477BD70));
        inline app::SequenceNode__Class* get_class() {
            return il2cpp::get_class<app::SequenceNode__Class>(type_info, "System.Xml.Schema", "SequenceNode");
        }
        inline app::SequenceNode* create() {
            return il2cpp::create_object<app::SequenceNode>(get_class());
        }
    } // namespace SequenceNode
} // namespace app::classes::types
