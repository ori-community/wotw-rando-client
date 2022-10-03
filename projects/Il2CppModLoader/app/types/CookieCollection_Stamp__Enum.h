#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CookieCollection_Stamp__Enum {
        namespace {
            app::CookieCollection_Stamp__Enum__Class* type_info_ref = nullptr;
        }
        app::CookieCollection_Stamp__Enum__Class** type_info = &type_info_ref;
        inline app::CookieCollection_Stamp__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CookieCollection_Stamp__Enum__Class>(type_info, "System.Net", "CookieCollection", "Stamp");
        }
        inline app::CookieCollection_Stamp__Enum* create() {
            return il2cpp::create_object<app::CookieCollection_Stamp__Enum>(get_class());
        }
    } // namespace CookieCollection_Stamp__Enum
} // namespace app::classes::types
