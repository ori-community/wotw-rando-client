#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlAttribute {
        inline app::XmlAttribute__Class** type_info = (app::XmlAttribute__Class**)(modloader::win::memory::resolve_rva(0x0478DC38));
        inline app::XmlAttribute__Class* get_class() {
            return il2cpp::get_class<app::XmlAttribute__Class>(type_info, "System.Xml", "XmlAttribute");
        }
        inline app::XmlAttribute* create() {
            return il2cpp::create_object<app::XmlAttribute>(get_class());
        }
        inline app::XmlAttribute__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlAttribute__Array>(get_class(), size);
        }
        inline app::XmlAttribute__Array* create_array(const std::vector<app::XmlAttribute*>& items) {
            return il2cpp::array_new<app::XmlAttribute__Array>(get_class(), items);
        }
    } // namespace XmlAttribute
} // namespace app::classes::types
