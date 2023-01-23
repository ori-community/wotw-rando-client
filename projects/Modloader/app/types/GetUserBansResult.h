#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GetUserBansResult__Class.h>
#include <Modloader/app/structs/GetUserBansResult.h>

namespace app::classes::types {
    namespace GetUserBansResult {
        inline app::GetUserBansResult__Class** type_info = (app::GetUserBansResult__Class**)(modloader::win::memory::resolve_rva(0x047201F8));
        inline app::GetUserBansResult__Class* get_class() {
            return il2cpp::get_class<app::GetUserBansResult__Class>(type_info, "PlayFab.ServerModels", "GetUserBansResult");
        }
        inline app::GetUserBansResult* create() {
            return il2cpp::create_object<app::GetUserBansResult>(get_class());
        }
    } // namespace GetUserBansResult
} // namespace app::classes::types
