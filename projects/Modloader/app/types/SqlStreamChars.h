#pragma once
#include <Modloader/app/structs/SqlStreamChars.h>
#include <Modloader/app/structs/SqlStreamChars__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SqlStreamChars {
        inline app::SqlStreamChars__Class** type_info() {
            static app::SqlStreamChars__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SqlStreamChars__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SqlStreamChars__Class* get_class() {
            return il2cpp::get_class<app::SqlStreamChars__Class>(type_info(), "System.Data.SqlTypes", "SqlStreamChars");
        }
        inline app::SqlStreamChars* create() {
            return il2cpp::create_object<app::SqlStreamChars>(get_class());
        }
    } // namespace SqlStreamChars
} // namespace app::classes::types
