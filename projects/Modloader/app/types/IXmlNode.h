#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IXmlNode {
        inline app::IXmlNode__Class** type_info = (app::IXmlNode__Class**)(modloader::win::memory::resolve_rva(0x047681E0));
        inline app::IXmlNode__Class* get_class() {
            return il2cpp::get_class<app::IXmlNode__Class>(type_info, "Newtonsoft.Json.Converters", "IXmlNode");
        }
        inline app::IXmlNode__Array* create_array(int size) {
            return il2cpp::array_new<app::IXmlNode__Array>(get_class(), size);
        }
        inline app::IXmlNode__Array* create_array(const std::vector<app::IXmlNode*>& items) {
            return il2cpp::array_new<app::IXmlNode__Array>(get_class(), items);
        }
    } // namespace IXmlNode
} // namespace app::classes::types
