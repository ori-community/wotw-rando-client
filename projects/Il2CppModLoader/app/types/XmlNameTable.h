#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlNameTable {
        namespace {
            app::XmlNameTable__Class* type_info_ref = nullptr;
        }
        app::XmlNameTable__Class** type_info = &type_info_ref;
        inline app::XmlNameTable__Class* get_class() {
            return il2cpp::get_class<app::XmlNameTable__Class>(type_info, "System.Xml", "XmlNameTable");
        }
        inline app::XmlNameTable* create() {
            return il2cpp::create_object<app::XmlNameTable>(get_class());
        }
    } // namespace XmlNameTable
} // namespace app::classes::types
