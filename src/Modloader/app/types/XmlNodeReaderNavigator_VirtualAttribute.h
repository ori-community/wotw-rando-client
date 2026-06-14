#pragma once
#include <Modloader/app/structs/XmlNodeReaderNavigator_VirtualAttribute.h>
#include <Modloader/app/structs/XmlNodeReaderNavigator_VirtualAttribute__Array.h>
#include <Modloader/app/structs/XmlNodeReaderNavigator_VirtualAttribute__Boxed.h>
#include <Modloader/app/structs/XmlNodeReaderNavigator_VirtualAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlNodeReaderNavigator_VirtualAttribute {
        inline app::XmlNodeReaderNavigator_VirtualAttribute__Class** type_info() {
            static app::XmlNodeReaderNavigator_VirtualAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlNodeReaderNavigator_VirtualAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlNodeReaderNavigator_VirtualAttribute__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlNodeReaderNavigator_VirtualAttribute__Class>(type_info(), "System.Xml", "XmlNodeReaderNavigator", "VirtualAttribute");
        }
        inline app::XmlNodeReaderNavigator_VirtualAttribute* create() {
            return il2cpp::create_object<app::XmlNodeReaderNavigator_VirtualAttribute>(get_class());
        }
        inline app::XmlNodeReaderNavigator_VirtualAttribute__Boxed* box(app::XmlNodeReaderNavigator_VirtualAttribute value) {
            return il2cpp::box_value<app::XmlNodeReaderNavigator_VirtualAttribute__Boxed>(get_class(), value);
        }
        inline app::XmlNodeReaderNavigator_VirtualAttribute__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlNodeReaderNavigator_VirtualAttribute__Array>(get_class(), size);
        }
        inline app::XmlNodeReaderNavigator_VirtualAttribute__Array* create_array(const std::vector<app::XmlNodeReaderNavigator_VirtualAttribute>& items) {
            return il2cpp::array_new<app::XmlNodeReaderNavigator_VirtualAttribute__Array>(get_class(), items);
        }
    } // namespace XmlNodeReaderNavigator_VirtualAttribute
} // namespace app::classes::types
