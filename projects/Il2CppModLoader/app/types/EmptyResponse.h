#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EmptyResponse {
        inline app::EmptyResponse__Class** type_info = (app::EmptyResponse__Class**)(modloader::win::memory::resolve_rva(0x04754EE8));
        inline app::EmptyResponse__Class* get_class() {
            return il2cpp::get_class<app::EmptyResponse__Class>(type_info, "PlayFab.ClientModels", "EmptyResponse");
        }
        inline app::EmptyResponse* create() {
            return il2cpp::create_object<app::EmptyResponse>(get_class());
        }
    } // namespace EmptyResponse
} // namespace app::classes::types
