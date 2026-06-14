#pragma once
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlNameTable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlNameTable {
        inline app::XmlNameTable__Class** type_info() {
            static app::XmlNameTable__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlNameTable__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlNameTable__Class* get_class() {
            return il2cpp::get_class<app::XmlNameTable__Class>(type_info(), "System.Xml", "XmlNameTable");
        }
        inline app::XmlNameTable* create() {
            return il2cpp::create_object<app::XmlNameTable>(get_class());
        }
    } // namespace XmlNameTable
} // namespace app::classes::types
