#pragma once
#include <Modloader/app/structs/XmlNamespaceScope__Enum.h>
#include <Modloader/app/structs/XmlNamespaceScope__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlNamespaceScope__Enum {
        inline app::XmlNamespaceScope__Enum__Class** type_info() {
            static app::XmlNamespaceScope__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlNamespaceScope__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlNamespaceScope__Enum__Class* get_class() {
            return il2cpp::get_class<app::XmlNamespaceScope__Enum__Class>(type_info(), "System.Xml", "XmlNamespaceScope");
        }
        inline app::XmlNamespaceScope__Enum* create() {
            return il2cpp::create_object<app::XmlNamespaceScope__Enum>(get_class());
        }
    } // namespace XmlNamespaceScope__Enum
} // namespace app::classes::types
