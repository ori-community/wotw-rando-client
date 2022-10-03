#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EHTMLMouseButton__Enum {
        namespace {
            app::EHTMLMouseButton__Enum__Class* type_info_ref = nullptr;
        }
        app::EHTMLMouseButton__Enum__Class** type_info = &type_info_ref;
        inline app::EHTMLMouseButton__Enum__Class* get_class() {
            return il2cpp::get_class<app::EHTMLMouseButton__Enum__Class>(type_info, "Steamworks", "EHTMLMouseButton");
        }
        inline app::EHTMLMouseButton__Enum* create() {
            return il2cpp::create_object<app::EHTMLMouseButton__Enum>(get_class());
        }
    } // namespace EHTMLMouseButton__Enum
} // namespace app::classes::types
