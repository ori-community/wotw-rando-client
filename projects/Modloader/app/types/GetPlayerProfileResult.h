#pragma once
#include <Modloader/app/structs/GetPlayerProfileResult.h>
#include <Modloader/app/structs/GetPlayerProfileResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPlayerProfileResult {
        inline app::GetPlayerProfileResult__Class** type_info() {
            static app::GetPlayerProfileResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPlayerProfileResult__Class**)(modloader::win::memory::resolve_rva(0x047029D8));
            }
            return cache;
        }
        inline app::GetPlayerProfileResult__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerProfileResult__Class>(type_info(), "PlayFab.ClientModels", "GetPlayerProfileResult");
        }
        inline app::GetPlayerProfileResult* create() {
            return il2cpp::create_object<app::GetPlayerProfileResult>(get_class());
        }
    } // namespace GetPlayerProfileResult
} // namespace app::classes::types
