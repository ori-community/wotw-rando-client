#pragma once
#include <Modloader/app/structs/CookieCollection_Stamp__Enum.h>
#include <Modloader/app/structs/CookieCollection_Stamp__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CookieCollection_Stamp__Enum {
        inline app::CookieCollection_Stamp__Enum__Class** type_info() {
            static app::CookieCollection_Stamp__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CookieCollection_Stamp__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CookieCollection_Stamp__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CookieCollection_Stamp__Enum__Class>(type_info(), "System.Net", "CookieCollection", "Stamp");
        }
        inline app::CookieCollection_Stamp__Enum* create() {
            return il2cpp::create_object<app::CookieCollection_Stamp__Enum>(get_class());
        }
    } // namespace CookieCollection_Stamp__Enum
} // namespace app::classes::types
