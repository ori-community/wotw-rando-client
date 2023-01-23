#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GetPlayFabIDsFromGenericIDsResult__Class.h>
#include <Modloader/app/structs/GetPlayFabIDsFromGenericIDsResult.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromGenericIDsResult {
        inline app::GetPlayFabIDsFromGenericIDsResult__Class** type_info = (app::GetPlayFabIDsFromGenericIDsResult__Class**)(modloader::win::memory::resolve_rva(0x0478C8E0));
        inline app::GetPlayFabIDsFromGenericIDsResult__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromGenericIDsResult__Class>(type_info, "PlayFab.ClientModels", "GetPlayFabIDsFromGenericIDsResult");
        }
        inline app::GetPlayFabIDsFromGenericIDsResult* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromGenericIDsResult>(get_class());
        }
    } // namespace GetPlayFabIDsFromGenericIDsResult
} // namespace app::classes::types
