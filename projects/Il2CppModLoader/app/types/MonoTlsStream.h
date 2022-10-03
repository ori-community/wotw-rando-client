#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MonoTlsStream {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MonoTlsStream__Class** type_info;
        inline app::MonoTlsStream__Class* get_class() {
            return il2cpp::get_class<app::MonoTlsStream__Class>(type_info, "Mono.Net.Security", "MonoTlsStream");
        }
        inline app::MonoTlsStream* create() {
            return il2cpp::create_object<app::MonoTlsStream>(get_class());
        }
    } // namespace MonoTlsStream
} // namespace app::classes::types
