#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BasicClient {
        inline app::BasicClient__Class** type_info = (app::BasicClient__Class**)(modloader::win::memory::resolve_rva(0x04754B50));
        inline app::BasicClient__Class* get_class() {
            return il2cpp::get_class<app::BasicClient__Class>(type_info, "System.Net", "BasicClient");
        }
        inline app::BasicClient* create() {
            return il2cpp::create_object<app::BasicClient>(get_class());
        }
    } // namespace BasicClient
} // namespace app::classes::types
