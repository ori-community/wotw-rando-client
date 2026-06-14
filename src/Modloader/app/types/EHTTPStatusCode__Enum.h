#pragma once
#include <Modloader/app/structs/EHTTPStatusCode__Enum.h>
#include <Modloader/app/structs/EHTTPStatusCode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EHTTPStatusCode__Enum {
        inline app::EHTTPStatusCode__Enum__Class** type_info() {
            static app::EHTTPStatusCode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EHTTPStatusCode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EHTTPStatusCode__Enum__Class* get_class() {
            return il2cpp::get_class<app::EHTTPStatusCode__Enum__Class>(type_info(), "Steamworks", "EHTTPStatusCode");
        }
        inline app::EHTTPStatusCode__Enum* create() {
            return il2cpp::create_object<app::EHTTPStatusCode__Enum>(get_class());
        }
    } // namespace EHTTPStatusCode__Enum
} // namespace app::classes::types
