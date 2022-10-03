#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EHTMLKeyModifiers__Enum {
        namespace {
            app::EHTMLKeyModifiers__Enum__Class* type_info_ref = nullptr;
        }
        app::EHTMLKeyModifiers__Enum__Class** type_info = &type_info_ref;
        inline app::EHTMLKeyModifiers__Enum__Class* get_class() {
            return il2cpp::get_class<app::EHTMLKeyModifiers__Enum__Class>(type_info, "Steamworks", "EHTMLKeyModifiers");
        }
        inline app::EHTMLKeyModifiers__Enum* create() {
            return il2cpp::create_object<app::EHTMLKeyModifiers__Enum>(get_class());
        }
    } // namespace EHTMLKeyModifiers__Enum
} // namespace app::classes::types
