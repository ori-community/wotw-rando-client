#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UriParser_UriQuirksVersion__Enum {
        namespace {
            app::UriParser_UriQuirksVersion__Enum__Class* type_info_ref = nullptr;
        }
        app::UriParser_UriQuirksVersion__Enum__Class** type_info = &type_info_ref;
        inline app::UriParser_UriQuirksVersion__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UriParser_UriQuirksVersion__Enum__Class>(type_info, "System", "UriParser", "UriQuirksVersion");
        }
        inline app::UriParser_UriQuirksVersion__Enum* create() {
            return il2cpp::create_object<app::UriParser_UriQuirksVersion__Enum>(get_class());
        }
    } // namespace UriParser_UriQuirksVersion__Enum
} // namespace app::classes::types
