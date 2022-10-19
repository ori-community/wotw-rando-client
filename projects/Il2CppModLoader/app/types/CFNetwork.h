#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CFNetwork {
        inline app::CFNetwork__Class** type_info = (app::CFNetwork__Class**)(modloader::win::memory::resolve_rva(0x047454D8));
        inline app::CFNetwork__Class* get_class() {
            return il2cpp::get_class<app::CFNetwork__Class>(type_info, "Mono.Net", "CFNetwork");
        }
        inline app::CFNetwork* create() {
            return il2cpp::create_object<app::CFNetwork>(get_class());
        }
    } // namespace CFNetwork
} // namespace app::classes::types
