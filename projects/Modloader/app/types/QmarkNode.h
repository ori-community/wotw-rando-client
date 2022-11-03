#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace QmarkNode {
        inline app::QmarkNode__Class** type_info = (app::QmarkNode__Class**)(modloader::win::memory::resolve_rva(0x0473AD58));
        inline app::QmarkNode__Class* get_class() {
            return il2cpp::get_class<app::QmarkNode__Class>(type_info, "System.Xml.Schema", "QmarkNode");
        }
        inline app::QmarkNode* create() {
            return il2cpp::create_object<app::QmarkNode>(get_class());
        }
    } // namespace QmarkNode
} // namespace app::classes::types
