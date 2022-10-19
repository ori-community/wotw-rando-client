#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlMemberMapping {
        namespace {
            inline app::XmlMemberMapping__Class* type_info_ref = nullptr;
        }
        inline app::XmlMemberMapping__Class** type_info = &type_info_ref;
        inline app::XmlMemberMapping__Class* get_class() {
            return il2cpp::get_class<app::XmlMemberMapping__Class>(type_info, "System.Xml.Serialization", "XmlMemberMapping");
        }
        inline app::XmlMemberMapping* create() {
            return il2cpp::create_object<app::XmlMemberMapping>(get_class());
        }
        inline app::XmlMemberMapping__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlMemberMapping__Array>(get_class(), size);
        }
        inline app::XmlMemberMapping__Array* create_array(const std::vector<app::XmlMemberMapping*>& items) {
            return il2cpp::array_new<app::XmlMemberMapping__Array>(get_class(), items);
        }
    } // namespace XmlMemberMapping
} // namespace app::classes::types
