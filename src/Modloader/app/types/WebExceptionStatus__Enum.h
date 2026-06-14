#pragma once
#include <Modloader/app/structs/WebExceptionStatus__Enum.h>
#include <Modloader/app/structs/WebExceptionStatus__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WebExceptionStatus__Enum {
        inline app::WebExceptionStatus__Enum__Class** type_info() {
            static app::WebExceptionStatus__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WebExceptionStatus__Enum__Class**)(modloader::win::memory::resolve_rva(0x04707668));
            }
            return cache;
        }
        inline app::WebExceptionStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::WebExceptionStatus__Enum__Class>(type_info(), "System.Net", "WebExceptionStatus");
        }
        inline app::WebExceptionStatus__Enum* create() {
            return il2cpp::create_object<app::WebExceptionStatus__Enum>(get_class());
        }
    } // namespace WebExceptionStatus__Enum
} // namespace app::classes::types
