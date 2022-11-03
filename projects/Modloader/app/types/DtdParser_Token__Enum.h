#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DtdParser_Token__Enum {
        namespace {
            inline app::DtdParser_Token__Enum__Class* type_info_ref = nullptr;
        }
        inline app::DtdParser_Token__Enum__Class** type_info = &type_info_ref;
        inline app::DtdParser_Token__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DtdParser_Token__Enum__Class>(type_info, "System.Xml", "DtdParser", "Token");
        }
        inline app::DtdParser_Token__Enum* create() {
            return il2cpp::create_object<app::DtdParser_Token__Enum>(get_class());
        }
    } // namespace DtdParser_Token__Enum
} // namespace app::classes::types
