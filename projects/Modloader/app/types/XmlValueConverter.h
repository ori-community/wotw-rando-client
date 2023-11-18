#pragma once
#include <Modloader/app/structs/XmlValueConverter.h>
#include <Modloader/app/structs/XmlValueConverter__Array.h>
#include <Modloader/app/structs/XmlValueConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlValueConverter {
        inline app::XmlValueConverter__Class** type_info() {
            static app::XmlValueConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlValueConverter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlValueConverter__Class* get_class() {
            return il2cpp::get_class<app::XmlValueConverter__Class>(type_info(), "System.Xml.Schema", "XmlValueConverter");
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
