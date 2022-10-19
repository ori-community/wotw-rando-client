#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UpdateSharedGroupDataResult {
        inline app::UpdateSharedGroupDataResult__Class** type_info = (app::UpdateSharedGroupDataResult__Class**)(modloader::win::memory::resolve_rva(0x04736D48));
        inline app::UpdateSharedGroupDataResult__Class* get_class() {
            return il2cpp::get_class<app::UpdateSharedGroupDataResult__Class>(type_info, "PlayFab.ClientModels", "UpdateSharedGroupDataResult");
        }
        inline app::UpdateSharedGroupDataResult* create() {
            return il2cpp::create_object<app::UpdateSharedGroupDataResult>(get_class());
        }
    } // namespace UpdateSharedGroupDataResult
} // namespace app::classes::types
