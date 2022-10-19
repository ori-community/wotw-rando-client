#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ServerCommunicator {
        namespace {
            inline app::ServerCommunicator__Class* type_info_ref = nullptr;
        }
        inline app::ServerCommunicator__Class** type_info = &type_info_ref;
        inline app::ServerCommunicator__Class* get_class() {
            return il2cpp::get_class<app::ServerCommunicator__Class>(type_info, "Moon.Network.Web", "ServerCommunicator");
        }
        inline app::ServerCommunicator* create() {
            return il2cpp::create_object<app::ServerCommunicator>(get_class());
        }
    } // namespace ServerCommunicator
} // namespace app::classes::types
