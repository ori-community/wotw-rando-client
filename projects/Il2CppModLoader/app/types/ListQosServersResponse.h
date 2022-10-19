#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ListQosServersResponse {
        inline app::ListQosServersResponse__Class** type_info = (app::ListQosServersResponse__Class**)(modloader::win::memory::resolve_rva(0x0472FFE0));
        inline app::ListQosServersResponse__Class* get_class() {
            return il2cpp::get_class<app::ListQosServersResponse__Class>(type_info, "PlayFab.MultiplayerModels", "ListQosServersResponse");
        }
        inline app::ListQosServersResponse* create() {
            return il2cpp::create_object<app::ListQosServersResponse>(get_class());
        }
    } // namespace ListQosServersResponse
} // namespace app::classes::types
