#pragma once
#include <Modloader/app/structs/UriParser_UriQuirksVersion__Enum.h>
#include <Modloader/app/structs/UriParser_UriQuirksVersion__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UriParser_UriQuirksVersion__Enum {
        inline app::UriParser_UriQuirksVersion__Enum__Class** type_info() {
            static app::UriParser_UriQuirksVersion__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UriParser_UriQuirksVersion__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UriParser_UriQuirksVersion__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UriParser_UriQuirksVersion__Enum__Class>(type_info(), "System", "UriParser", "UriQuirksVersion");
        }
        inline app::UriParser_UriQuirksVersion__Enum* create() {
            return il2cpp::create_object<app::UriParser_UriQuirksVersion__Enum>(get_class());
        }
    } // namespace UriParser_UriQuirksVersion__Enum
} // namespace app::classes::types
