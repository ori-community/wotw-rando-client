#pragma once
#include <Modloader/app/structs/XmlMemberMapping__Array.h>
#include <Modloader/app/structs/XmlMemberMapping__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlMemberMapping__Array {
        inline app::XmlMemberMapping__Array__Class** type_info() {
            static app::XmlMemberMapping__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlMemberMapping__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlMemberMapping__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlMemberMapping__Array__Class>(type_info(), "System.Xml.Serialization", "XmlMemberMapping[]");
        }
        inline app::XmlMemberMapping__Array* create() {
            return il2cpp::create_object<app::XmlMemberMapping__Array>(get_class());
        }
    } // namespace XmlMemberMapping__Array
} // namespace app::classes::types
