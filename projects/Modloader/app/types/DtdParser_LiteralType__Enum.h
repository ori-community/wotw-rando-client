#pragma once
#include <Modloader/app/structs/DtdParser_LiteralType__Enum.h>
#include <Modloader/app/structs/DtdParser_LiteralType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DtdParser_LiteralType__Enum {
        inline app::DtdParser_LiteralType__Enum__Class** type_info() {
            static app::DtdParser_LiteralType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DtdParser_LiteralType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DtdParser_LiteralType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DtdParser_LiteralType__Enum__Class>(type_info(), "System.Xml", "DtdParser", "LiteralType");
        }
        inline app::DtdParser_LiteralType__Enum* create() {
            return il2cpp::create_object<app::DtdParser_LiteralType__Enum>(get_class());
        }
    } // namespace DtdParser_LiteralType__Enum
} // namespace app::classes::types
