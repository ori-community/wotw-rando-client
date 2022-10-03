#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WebExceptionMapping {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WebExceptionMapping__Class** type_info;
        inline app::WebExceptionMapping__Class* get_class() {
            return il2cpp::get_class<app::WebExceptionMapping__Class>(type_info, "System.Net", "WebExceptionMapping");
        }
        inline app::WebExceptionMapping* create() {
            return il2cpp::create_object<app::WebExceptionMapping>(get_class());
        }
    } // namespace WebExceptionMapping
} // namespace app::classes::types
