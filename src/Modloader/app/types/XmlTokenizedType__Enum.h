#pragma once
#include <Modloader/app/structs/XmlTokenizedType__Enum.h>
#include <Modloader/app/structs/XmlTokenizedType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlTokenizedType__Enum {
        inline app::XmlTokenizedType__Enum__Class** type_info() {
            static app::XmlTokenizedType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlTokenizedType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlTokenizedType__Enum__Class* get_class() {
            return il2cpp::get_class<app::XmlTokenizedType__Enum__Class>(type_info(), "System.Xml", "XmlTokenizedType");
        }
        inline app::XmlTokenizedType__Enum* create() {
            return il2cpp::create_object<app::XmlTokenizedType__Enum>(get_class());
        }
    } // namespace XmlTokenizedType__Enum
} // namespace app::classes::types
