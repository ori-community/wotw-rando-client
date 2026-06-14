#pragma once
#include <Modloader/app/structs/WebExceptionInternalStatus__Enum.h>
#include <Modloader/app/structs/WebExceptionInternalStatus__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WebExceptionInternalStatus__Enum {
        inline app::WebExceptionInternalStatus__Enum__Class** type_info() {
            static app::WebExceptionInternalStatus__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WebExceptionInternalStatus__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WebExceptionInternalStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::WebExceptionInternalStatus__Enum__Class>(type_info(), "System.Net", "WebExceptionInternalStatus");
        }
        inline app::WebExceptionInternalStatus__Enum* create() {
            return il2cpp::create_object<app::WebExceptionInternalStatus__Enum>(get_class());
        }
    } // namespace WebExceptionInternalStatus__Enum
} // namespace app::classes::types
