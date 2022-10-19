#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NetworkCredential {
        inline app::NetworkCredential__Class** type_info = (app::NetworkCredential__Class**)(modloader::win::memory::resolve_rva(0x0477F570));
        inline app::NetworkCredential__Class* get_class() {
            return il2cpp::get_class<app::NetworkCredential__Class>(type_info, "System.Net", "NetworkCredential");
        }
        inline app::NetworkCredential* create() {
            return il2cpp::create_object<app::NetworkCredential>(get_class());
        }
    } // namespace NetworkCredential
} // namespace app::classes::types
