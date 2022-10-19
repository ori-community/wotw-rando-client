#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SqlStreamChars {
        namespace {
            inline app::SqlStreamChars__Class* type_info_ref = nullptr;
        }
        inline app::SqlStreamChars__Class** type_info = &type_info_ref;
        inline app::SqlStreamChars__Class* get_class() {
            return il2cpp::get_class<app::SqlStreamChars__Class>(type_info, "System.Data.SqlTypes", "SqlStreamChars");
        }
        inline app::SqlStreamChars* create() {
            return il2cpp::create_object<app::SqlStreamChars>(get_class());
        }
    } // namespace SqlStreamChars
} // namespace app::classes::types
