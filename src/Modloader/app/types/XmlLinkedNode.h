#pragma once
#include <Modloader/app/structs/XmlLinkedNode.h>
#include <Modloader/app/structs/XmlLinkedNode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlLinkedNode {
        inline app::XmlLinkedNode__Class** type_info() {
            static app::XmlLinkedNode__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlLinkedNode__Class**)(modloader::win::memory::resolve_rva(0x04702AD8));
            }
            return cache;
        }
        inline app::XmlLinkedNode__Class* get_class() {
            return il2cpp::get_class<app::XmlLinkedNode__Class>(type_info(), "System.Xml", "XmlLinkedNode");
        }
        inline app::XmlLinkedNode* create() {
            return il2cpp::create_object<app::XmlLinkedNode>(get_class());
        }
    } // namespace XmlLinkedNode
} // namespace app::classes::types
