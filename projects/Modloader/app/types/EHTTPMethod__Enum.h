#pragma once
#include <Modloader/app/structs/EHTTPMethod__Enum.h>
#include <Modloader/app/structs/EHTTPMethod__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EHTTPMethod__Enum {
        inline app::EHTTPMethod__Enum__Class** type_info() {
            static app::EHTTPMethod__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EHTTPMethod__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EHTTPMethod__Enum__Class* get_class() {
            return il2cpp::get_class<app::EHTTPMethod__Enum__Class>(type_info(), "Steamworks", "EHTTPMethod");
        }
        inline app::EHTTPMethod__Enum* create() {
            return il2cpp::create_object<app::EHTTPMethod__Enum>(get_class());
        }
    } // namespace EHTTPMethod__Enum
} // namespace app::classes::types
