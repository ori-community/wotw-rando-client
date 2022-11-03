#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XNode {
        inline app::XNode__Class** type_info = (app::XNode__Class**)(modloader::win::memory::resolve_rva(0x0473A050));
        inline app::XNode__Class* get_class() {
            return il2cpp::get_class<app::XNode__Class>(type_info, "System.Xml.Linq", "XNode");
        }
        inline app::XNode* create() {
            return il2cpp::create_object<app::XNode>(get_class());
        }
    } // namespace XNode
} // namespace app::classes::types
