#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetTitleDataResult {
        inline app::GetTitleDataResult__Class** type_info = (app::GetTitleDataResult__Class**)(modloader::win::memory::resolve_rva(0x0472CDF0));
        inline app::GetTitleDataResult__Class* get_class() {
            return il2cpp::get_class<app::GetTitleDataResult__Class>(type_info, "PlayFab.ClientModels", "GetTitleDataResult");
        }
        inline app::GetTitleDataResult* create() {
            return il2cpp::create_object<app::GetTitleDataResult>(get_class());
        }
    } // namespace GetTitleDataResult
} // namespace app::classes::types
