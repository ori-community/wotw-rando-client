#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlNodeReaderNavigator_VirtualAttribute {
        namespace {
            inline app::XmlNodeReaderNavigator_VirtualAttribute__Class* type_info_ref = nullptr;
        }
        inline app::XmlNodeReaderNavigator_VirtualAttribute__Class** type_info = &type_info_ref;
        inline app::XmlNodeReaderNavigator_VirtualAttribute__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlNodeReaderNavigator_VirtualAttribute__Class>(type_info, "System.Xml", "XmlNodeReaderNavigator", "VirtualAttribute");
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
