#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GenericUriParserOptions__Enum {
        namespace {
            app::GenericUriParserOptions__Enum__Class* type_info_ref = nullptr;
        }
        app::GenericUriParserOptions__Enum__Class** type_info = &type_info_ref;
        inline app::GenericUriParserOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::GenericUriParserOptions__Enum__Class>(type_info, "System", "GenericUriParserOptions");
        }
        inline app::GenericUriParserOptions__Enum* create() {
            return il2cpp::create_object<app::GenericUriParserOptions__Enum>(get_class());
        }
    } // namespace GenericUriParserOptions__Enum
} // namespace app::classes::types
