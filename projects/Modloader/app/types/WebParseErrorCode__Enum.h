#pragma once
#include <Modloader/app/structs/WebParseErrorCode__Enum.h>
#include <Modloader/app/structs/WebParseErrorCode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WebParseErrorCode__Enum {
        inline app::WebParseErrorCode__Enum__Class** type_info() {
            static app::WebParseErrorCode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WebParseErrorCode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WebParseErrorCode__Enum__Class* get_class() {
            return il2cpp::get_class<app::WebParseErrorCode__Enum__Class>(type_info(), "System.Net", "WebParseErrorCode");
        }
        inline app::WebParseErrorCode__Enum* create() {
            return il2cpp::create_object<app::WebParseErrorCode__Enum>(get_class());
        }
    } // namespace WebParseErrorCode__Enum
} // namespace app::classes::types
