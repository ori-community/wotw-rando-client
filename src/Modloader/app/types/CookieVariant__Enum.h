#pragma once
#include <Modloader/app/structs/CookieVariant__Enum.h>
#include <Modloader/app/structs/CookieVariant__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CookieVariant__Enum {
        inline app::CookieVariant__Enum__Class** type_info() {
            static app::CookieVariant__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CookieVariant__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CookieVariant__Enum__Class* get_class() {
            return il2cpp::get_class<app::CookieVariant__Enum__Class>(type_info(), "System.Net", "CookieVariant");
        }
        inline app::CookieVariant__Enum* create() {
            return il2cpp::create_object<app::CookieVariant__Enum>(get_class());
        }
    } // namespace CookieVariant__Enum
} // namespace app::classes::types
