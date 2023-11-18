#pragma once
#include <Modloader/app/structs/XNode.h>
#include <Modloader/app/structs/XNode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XNode {
        inline app::XNode__Class** type_info() {
            static app::XNode__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XNode__Class**)(modloader::win::memory::resolve_rva(0x0473A050));
            }
            return cache;
        }
        inline app::XNode__Class* get_class() {
            return il2cpp::get_class<app::XNode__Class>(type_info(), "System.Xml.Linq", "XNode");
        }
        inline app::XNode* create() {
            return il2cpp::create_object<app::XNode>(get_class());
        }
    } // namespace XNode
} // namespace app::classes::types
