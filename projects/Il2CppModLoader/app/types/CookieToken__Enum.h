#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CookieToken__Enum {
        namespace {
            inline app::CookieToken__Enum__Class* type_info_ref = nullptr;
        }
        inline app::CookieToken__Enum__Class** type_info = &type_info_ref;
        inline app::CookieToken__Enum__Class* get_class() {
            return il2cpp::get_class<app::CookieToken__Enum__Class>(type_info, "System.Net", "CookieToken");
        }
        inline app::CookieToken__Enum* create() {
            return il2cpp::create_object<app::CookieToken__Enum>(get_class());
        }
    } // namespace CookieToken__Enum
} // namespace app::classes::types
