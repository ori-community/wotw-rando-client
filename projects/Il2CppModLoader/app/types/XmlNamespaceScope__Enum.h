#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlNamespaceScope__Enum {
        namespace {
            inline app::XmlNamespaceScope__Enum__Class* type_info_ref = nullptr;
        }
        inline app::XmlNamespaceScope__Enum__Class** type_info = &type_info_ref;
        inline app::XmlNamespaceScope__Enum__Class* get_class() {
            return il2cpp::get_class<app::XmlNamespaceScope__Enum__Class>(type_info, "System.Xml", "XmlNamespaceScope");
        }
        inline app::XmlNamespaceScope__Enum* create() {
            return il2cpp::create_object<app::XmlNamespaceScope__Enum>(get_class());
        }
    } // namespace XmlNamespaceScope__Enum
} // namespace app::classes::types
