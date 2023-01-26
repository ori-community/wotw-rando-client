#pragma once
#include <Modloader/app/structs/GenericUriParserOptions__Enum.h>
#include <Modloader/app/structs/GenericUriParserOptions__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GenericUriParserOptions__Enum {
        inline app::GenericUriParserOptions__Enum__Class** type_info() {
            static app::GenericUriParserOptions__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GenericUriParserOptions__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GenericUriParserOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::GenericUriParserOptions__Enum__Class>(type_info(), "System", "GenericUriParserOptions");
        }
        inline app::GenericUriParserOptions__Enum* create() {
            return il2cpp::create_object<app::GenericUriParserOptions__Enum>(get_class());
        }
    } // namespace GenericUriParserOptions__Enum
} // namespace app::classes::types
