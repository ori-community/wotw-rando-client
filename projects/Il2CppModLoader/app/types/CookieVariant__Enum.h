#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CookieVariant__Enum {
        namespace {
            app::CookieVariant__Enum__Class* type_info_ref = nullptr;
        }
        app::CookieVariant__Enum__Class** type_info = &type_info_ref;
        inline app::CookieVariant__Enum__Class* get_class() {
            return il2cpp::get_class<app::CookieVariant__Enum__Class>(type_info, "System.Net", "CookieVariant");
        }
        inline app::CookieVariant__Enum* create() {
            return il2cpp::create_object<app::CookieVariant__Enum>(get_class());
        }
    } // namespace CookieVariant__Enum
} // namespace app::classes::types
