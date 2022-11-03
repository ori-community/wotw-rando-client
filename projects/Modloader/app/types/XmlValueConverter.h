#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlValueConverter {
        namespace {
            inline app::XmlValueConverter__Class* type_info_ref = nullptr;
        }
        inline app::XmlValueConverter__Class** type_info = &type_info_ref;
        inline app::XmlValueConverter__Class* get_class() {
            return il2cpp::get_class<app::XmlValueConverter__Class>(type_info, "System.Xml.Schema", "XmlValueConverter");
        }
        inline app::XmlValueConverter* create() {
            return il2cpp::create_object<app::XmlValueConverter>(get_class());
        }
        inline app::XmlValueConverter__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlValueConverter__Array>(get_class(), size);
        }
        inline app::XmlValueConverter__Array* create_array(const std::vector<app::XmlValueConverter*>& items) {
            return il2cpp::array_new<app::XmlValueConverter__Array>(get_class(), items);
        }
    } // namespace XmlValueConverter
} // namespace app::classes::types
