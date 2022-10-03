#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PrivateKeySelectionCallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PrivateKeySelectionCallback__Class** type_info;
        inline app::PrivateKeySelectionCallback__Class* get_class() {
            return il2cpp::get_class<app::PrivateKeySelectionCallback__Class>(type_info, "Mono.Security.Protocol.Tls", "PrivateKeySelectionCallback");
        }
        inline app::PrivateKeySelectionCallback* create() {
            return il2cpp::create_object<app::PrivateKeySelectionCallback>(get_class());
        }
    } // namespace PrivateKeySelectionCallback
} // namespace app::classes::types
