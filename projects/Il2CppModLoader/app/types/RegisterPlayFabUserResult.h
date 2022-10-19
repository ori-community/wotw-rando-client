#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RegisterPlayFabUserResult {
        inline app::RegisterPlayFabUserResult__Class** type_info = (app::RegisterPlayFabUserResult__Class**)(modloader::win::memory::resolve_rva(0x04762968));
        inline app::RegisterPlayFabUserResult__Class* get_class() {
            return il2cpp::get_class<app::RegisterPlayFabUserResult__Class>(type_info, "PlayFab.ClientModels", "RegisterPlayFabUserResult");
        }
        inline app::RegisterPlayFabUserResult* create() {
            return il2cpp::create_object<app::RegisterPlayFabUserResult>(get_class());
        }
    } // namespace RegisterPlayFabUserResult
} // namespace app::classes::types
