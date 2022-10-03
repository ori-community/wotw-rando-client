#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NetworkStream {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NetworkStream__Class** type_info;
        inline app::NetworkStream__Class* get_class() {
            return il2cpp::get_class<app::NetworkStream__Class>(type_info, "System.Net.Sockets", "NetworkStream");
        }
        inline app::NetworkStream* create() {
            return il2cpp::create_object<app::NetworkStream>(get_class());
        }
    } // namespace NetworkStream
} // namespace app::classes::types
