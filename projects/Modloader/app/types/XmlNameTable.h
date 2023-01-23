#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlNameTable__Class.h>
#include <Modloader/app/structs/XmlNameTable.h>

namespace app::classes::types {
    namespace XmlNameTable {
        namespace {
            inline app::XmlNameTable__Class* type_info_ref = nullptr;
        }
        inline app::XmlNameTable__Class** type_info = &type_info_ref;
        inline app::XmlNameTable__Class* get_class() {
            return il2cpp::get_class<app::XmlNameTable__Class>(type_info, "System.Xml", "XmlNameTable");
        }
        inline app::XmlNameTable* create() {
            return il2cpp::create_object<app::XmlNameTable>(get_class());
        }
    } // namespace XmlNameTable
} // namespace app::classes::types
