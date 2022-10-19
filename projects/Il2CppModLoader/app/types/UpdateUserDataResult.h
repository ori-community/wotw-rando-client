#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UpdateUserDataResult {
        inline app::UpdateUserDataResult__Class** type_info = (app::UpdateUserDataResult__Class**)(modloader::win::memory::resolve_rva(0x0475E398));
        inline app::UpdateUserDataResult__Class* get_class() {
            return il2cpp::get_class<app::UpdateUserDataResult__Class>(type_info, "PlayFab.ClientModels", "UpdateUserDataResult");
        }
        inline app::UpdateUserDataResult* create() {
            return il2cpp::create_object<app::UpdateUserDataResult>(get_class());
        }
    } // namespace UpdateUserDataResult
} // namespace app::classes::types
