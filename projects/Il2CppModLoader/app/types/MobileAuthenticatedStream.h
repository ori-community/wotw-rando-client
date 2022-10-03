#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MobileAuthenticatedStream {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MobileAuthenticatedStream__Class** type_info;
        inline app::MobileAuthenticatedStream__Class* get_class() {
            return il2cpp::get_class<app::MobileAuthenticatedStream__Class>(type_info, "Mono.Net.Security", "MobileAuthenticatedStream");
        }
        inline app::MobileAuthenticatedStream* create() {
            return il2cpp::create_object<app::MobileAuthenticatedStream>(get_class());
        }
    } // namespace MobileAuthenticatedStream
} // namespace app::classes::types
