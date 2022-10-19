#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ServerCommunicator_c {
        inline app::ServerCommunicator_c__Class** type_info = (app::ServerCommunicator_c__Class**)(modloader::win::memory::resolve_rva(0x0478B270));
        inline app::ServerCommunicator_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ServerCommunicator_c__Class>(type_info, "Moon.Network.Web", "ServerCommunicator", "<>c");
        }
        inline app::ServerCommunicator_c* create() {
            return il2cpp::create_object<app::ServerCommunicator_c>(get_class());
        }
    } // namespace ServerCommunicator_c
} // namespace app::classes::types
