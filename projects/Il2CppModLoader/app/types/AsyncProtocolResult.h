#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AsyncProtocolResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AsyncProtocolResult__Class** type_info;
        inline app::AsyncProtocolResult__Class* get_class() {
            return il2cpp::get_class<app::AsyncProtocolResult__Class>(type_info, "Mono.Net.Security", "AsyncProtocolResult");
        }
        inline app::AsyncProtocolResult* create() {
            return il2cpp::create_object<app::AsyncProtocolResult>(get_class());
        }
    } // namespace AsyncProtocolResult
} // namespace app::classes::types
