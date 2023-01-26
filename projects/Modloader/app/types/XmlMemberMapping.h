#pragma once
#include <Modloader/app/structs/XmlMemberMapping.h>
#include <Modloader/app/structs/XmlMemberMapping__Array.h>
#include <Modloader/app/structs/XmlMemberMapping__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlMemberMapping {
        inline app::XmlMemberMapping__Class** type_info() {
            static app::XmlMemberMapping__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlMemberMapping__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlMemberMapping__Class* get_class() {
            return il2cpp::get_class<app::XmlMemberMapping__Class>(type_info(), "System.Xml.Serialization", "XmlMemberMapping");
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
