#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlNode__Class.h>
#include <Modloader/app/structs/XmlNode.h>
#include <Modloader/app/structs/XmlNode__Array.h>

namespace app::classes::types {
    namespace XmlNode {
        inline app::XmlNode__Class** type_info = (app::XmlNode__Class**)(modloader::win::memory::resolve_rva(0x04789190));
        inline app::XmlNode__Class* get_class() {
            return il2cpp::get_class<app::XmlNode__Class>(type_info, "System.Xml", "XmlNode");
        }
        inline app::XmlNode* create() {
            return il2cpp::create_object<app::XmlNode>(get_class());
        }
        inline app::XmlNode__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlNode__Array>(get_class(), size);
        }
        inline app::XmlNode__Array* create_array(const std::vector<app::XmlNode*>& items) {
            return il2cpp::array_new<app::XmlNode__Array>(get_class(), items);
        }
    } // namespace XmlNode
} // namespace app::classes::types
