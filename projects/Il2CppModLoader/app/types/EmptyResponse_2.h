#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EmptyResponse_2 {
        inline app::EmptyResponse_2__Class** type_info = (app::EmptyResponse_2__Class**)(modloader::win::memory::resolve_rva(0x0474A4A8));
        inline app::EmptyResponse_2__Class* get_class() {
            return il2cpp::get_class<app::EmptyResponse_2__Class>(type_info, "PlayFab.MultiplayerModels", "EmptyResponse");
        }
        inline app::EmptyResponse_2* create() {
            return il2cpp::create_object<app::EmptyResponse_2>(get_class());
        }
    } // namespace EmptyResponse_2
} // namespace app::classes::types
