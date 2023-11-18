#pragma once
#include <Modloader/app/structs/GetPlayerCombinedInfoRequest_1.h>
#include <Modloader/app/structs/GetPlayerCombinedInfoRequest_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPlayerCombinedInfoRequest_1 {
        inline app::GetPlayerCombinedInfoRequest_1__Class** type_info() {
            static app::GetPlayerCombinedInfoRequest_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPlayerCombinedInfoRequest_1__Class**)(modloader::win::memory::resolve_rva(0x04796E78));
            }
            return cache;
        }
        inline app::GetPlayerCombinedInfoRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerCombinedInfoRequest_1__Class>(type_info(), "PlayFab.ServerModels", "GetPlayerCombinedInfoRequest");
        }
        inline app::GetPlayerCombinedInfoRequest_1* create() {
            return il2cpp::create_object<app::GetPlayerCombinedInfoRequest_1>(get_class());
        }
    } // namespace GetPlayerCombinedInfoRequest_1
} // namespace app::classes::types
