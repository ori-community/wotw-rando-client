#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DigestClient {
        inline app::DigestClient__Class** type_info = (app::DigestClient__Class**)(modloader::win::memory::resolve_rva(0x04731908));
        inline app::DigestClient__Class* get_class() {
            return il2cpp::get_class<app::DigestClient__Class>(type_info, "System.Net", "DigestClient");
        }
        inline app::DigestClient* create() {
            return il2cpp::create_object<app::DigestClient>(get_class());
        }
    } // namespace DigestClient
} // namespace app::classes::types
