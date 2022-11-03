#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromKongregateIDsResult {
        inline app::GetPlayFabIDsFromKongregateIDsResult__Class** type_info = (app::GetPlayFabIDsFromKongregateIDsResult__Class**)(modloader::win::memory::resolve_rva(0x0474F648));
        inline app::GetPlayFabIDsFromKongregateIDsResult__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromKongregateIDsResult__Class>(type_info, "PlayFab.ClientModels", "GetPlayFabIDsFromKongregateIDsResult");
        }
        inline app::GetPlayFabIDsFromKongregateIDsResult* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromKongregateIDsResult>(get_class());
        }
    } // namespace GetPlayFabIDsFromKongregateIDsResult
} // namespace app::classes::types
