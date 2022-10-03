#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WebConnectionStream {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WebConnectionStream__Class** type_info;
        inline app::WebConnectionStream__Class* get_class() {
            return il2cpp::get_class<app::WebConnectionStream__Class>(type_info, "System.Net", "WebConnectionStream");
        }
        inline app::WebConnectionStream* create() {
            return il2cpp::create_object<app::WebConnectionStream>(get_class());
        }
    } // namespace WebConnectionStream
} // namespace app::classes::types
