#pragma once
#include <Modloader/app/structs/XmlSerializer__Array.h>
#include <Modloader/app/structs/XmlSerializer__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSerializer__Array {
        inline app::XmlSerializer__Array__Class** type_info() {
            static app::XmlSerializer__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlSerializer__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlSerializer__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlSerializer__Array__Class>(type_info(), "System.Xml.Serialization", "XmlSerializer[]");
        }
        inline app::XmlSerializer__Array* create() {
            return il2cpp::create_object<app::XmlSerializer__Array>(get_class());
        }
    } // namespace XmlSerializer__Array
} // namespace app::classes::types
