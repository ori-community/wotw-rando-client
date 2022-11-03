#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlusNode {
        inline app::PlusNode__Class** type_info = (app::PlusNode__Class**)(modloader::win::memory::resolve_rva(0x047314B8));
        inline app::PlusNode__Class* get_class() {
            return il2cpp::get_class<app::PlusNode__Class>(type_info, "System.Xml.Schema", "PlusNode");
        }
        inline app::PlusNode* create() {
            return il2cpp::create_object<app::PlusNode>(get_class());
        }
    } // namespace PlusNode
} // namespace app::classes::types
