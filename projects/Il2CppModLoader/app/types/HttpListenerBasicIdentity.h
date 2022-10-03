#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HttpListenerBasicIdentity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HttpListenerBasicIdentity__Class** type_info;
        inline app::HttpListenerBasicIdentity__Class* get_class() {
            return il2cpp::get_class<app::HttpListenerBasicIdentity__Class>(type_info, "System.Net", "HttpListenerBasicIdentity");
        }
        inline app::HttpListenerBasicIdentity* create() {
            return il2cpp::create_object<app::HttpListenerBasicIdentity>(get_class());
        }
    } // namespace HttpListenerBasicIdentity
} // namespace app::classes::types
