#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetUserDataResult {
        inline app::GetUserDataResult__Class** type_info = (app::GetUserDataResult__Class**)(modloader::win::memory::resolve_rva(0x04775D90));
        inline app::GetUserDataResult__Class* get_class() {
            return il2cpp::get_class<app::GetUserDataResult__Class>(type_info, "PlayFab.ClientModels", "GetUserDataResult");
        }
        inline app::GetUserDataResult* create() {
            return il2cpp::create_object<app::GetUserDataResult>(get_class());
        }
    } // namespace GetUserDataResult
} // namespace app::classes::types
