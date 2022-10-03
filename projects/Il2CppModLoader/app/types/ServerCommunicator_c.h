#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerCommunicator_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ServerCommunicator_c__Class** type_info;
        inline app::ServerCommunicator_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ServerCommunicator_c__Class>(type_info, "Moon.Network.Web", "ServerCommunicator", "<>c");
        }
        inline app::ServerCommunicator_c* create() {
            return il2cpp::create_object<app::ServerCommunicator_c>(get_class());
        }
    } // namespace ServerCommunicator_c
} // namespace app::classes::types
