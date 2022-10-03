#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlValueConverter {
        namespace {
            app::XmlValueConverter__Class* type_info_ref = nullptr;
        }
        app::XmlValueConverter__Class** type_info = &type_info_ref;
        inline app::XmlValueConverter__Class* get_class() {
            return il2cpp::get_class<app::XmlValueConverter__Class>(type_info, "System.Xml.Schema", "XmlValueConverter");
        }
        inline app::XmlValueConverter* create() {
            return il2cpp::create_object<app::XmlValueConverter>(get_class());
        }
        inline app::XmlValueConverter__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlValueConverter__Array>(get_class(), size);
        }
    } // namespace XmlValueConverter
} // namespace app::classes::types
