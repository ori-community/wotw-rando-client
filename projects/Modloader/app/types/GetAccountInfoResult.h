#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetAccountInfoResult {
        inline app::GetAccountInfoResult__Class** type_info = (app::GetAccountInfoResult__Class**)(modloader::win::memory::resolve_rva(0x047841E0));
        inline app::GetAccountInfoResult__Class* get_class() {
            return il2cpp::get_class<app::GetAccountInfoResult__Class>(type_info, "PlayFab.ClientModels", "GetAccountInfoResult");
        }
        inline app::GetAccountInfoResult* create() {
            return il2cpp::create_object<app::GetAccountInfoResult>(get_class());
        }
    } // namespace GetAccountInfoResult
} // namespace app::classes::types
