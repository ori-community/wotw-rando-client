#pragma once
#include <Modloader/app/structs/GetPlayFabIDsFromKongregateIDsResult.h>
#include <Modloader/app/structs/GetPlayFabIDsFromKongregateIDsResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromKongregateIDsResult {
        inline app::GetPlayFabIDsFromKongregateIDsResult__Class** type_info() {
            static app::GetPlayFabIDsFromKongregateIDsResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPlayFabIDsFromKongregateIDsResult__Class**)(modloader::win::memory::resolve_rva(0x0474F648));
            }
            return cache;
        }
        inline app::GetPlayFabIDsFromKongregateIDsResult__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromKongregateIDsResult__Class>(type_info(), "PlayFab.ClientModels", "GetPlayFabIDsFromKongregateIDsResult");
        }
        inline app::GetPlayFabIDsFromKongregateIDsResult* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromKongregateIDsResult>(get_class());
        }
    } // namespace GetPlayFabIDsFromKongregateIDsResult
} // namespace app::classes::types
