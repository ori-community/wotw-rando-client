#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetTitleNewsResult {
        inline app::GetTitleNewsResult__Class** type_info = (app::GetTitleNewsResult__Class**)(modloader::win::memory::resolve_rva(0x0474F848));
        inline app::GetTitleNewsResult__Class* get_class() {
            return il2cpp::get_class<app::GetTitleNewsResult__Class>(type_info, "PlayFab.ClientModels", "GetTitleNewsResult");
        }
        inline app::GetTitleNewsResult* create() {
            return il2cpp::create_object<app::GetTitleNewsResult>(get_class());
        }
    } // namespace GetTitleNewsResult
} // namespace app::classes::types
