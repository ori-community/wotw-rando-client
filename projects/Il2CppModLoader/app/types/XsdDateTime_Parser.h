#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XsdDateTime_Parser {
        inline app::XsdDateTime_Parser__Class** type_info = (app::XsdDateTime_Parser__Class**)(modloader::win::memory::resolve_rva(0x04725E00));
        inline app::XsdDateTime_Parser__Class* get_class() {
            return il2cpp::get_nested_class<app::XsdDateTime_Parser__Class>(type_info, "System.Xml.Schema", "XsdDateTime", "Parser");
        }
        inline app::XsdDateTime_Parser* create() {
            return il2cpp::create_object<app::XsdDateTime_Parser>(get_class());
        }
        inline app::XsdDateTime_Parser__Boxed* box(app::XsdDateTime_Parser value) {
            return il2cpp::box_value<app::XsdDateTime_Parser__Boxed>(get_class(), value);
        }
    } // namespace XsdDateTime_Parser
} // namespace app::classes::types
