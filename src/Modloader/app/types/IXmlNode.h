#pragma once
#include <Modloader/app/structs/IXmlNode.h>
#include <Modloader/app/structs/IXmlNode__Array.h>
#include <Modloader/app/structs/IXmlNode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IXmlNode {
        inline app::IXmlNode__Class** type_info() {
            static app::IXmlNode__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IXmlNode__Class**)(modloader::win::memory::resolve_rva(0x047681E0));
            }
            return cache;
        }
        inline app::IXmlNode__Class* get_class() {
            return il2cpp::get_class<app::IXmlNode__Class>(type_info(), "Newtonsoft.Json.Converters", "IXmlNode");
        }
        inline app::IXmlNode__Array* create_array(int size) {
            return il2cpp::array_new<app::IXmlNode__Array>(get_class(), size);
        }
        inline app::IXmlNode__Array* create_array(const std::vector<app::IXmlNode*>& items) {
            return il2cpp::array_new<app::IXmlNode__Array>(get_class(), items);
        }
    } // namespace IXmlNode
} // namespace app::classes::types
