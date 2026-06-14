#pragma once
#include <Modloader/app/structs/XmlReflectionMember__Array.h>
#include <Modloader/app/structs/XmlReflectionMember__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlReflectionMember__Array {
        inline app::XmlReflectionMember__Array__Class** type_info() {
            static app::XmlReflectionMember__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlReflectionMember__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlReflectionMember__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlReflectionMember__Array__Class>(type_info(), "System.Xml.Serialization", "XmlReflectionMember[]");
        }
        inline app::XmlReflectionMember__Array* create() {
            return il2cpp::create_object<app::XmlReflectionMember__Array>(get_class());
        }
    } // namespace XmlReflectionMember__Array
} // namespace app::classes::types
