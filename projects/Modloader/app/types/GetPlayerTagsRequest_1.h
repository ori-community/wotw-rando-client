#pragma once
#include <Modloader/app/structs/GetPlayerTagsRequest_1.h>
#include <Modloader/app/structs/GetPlayerTagsRequest_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPlayerTagsRequest_1 {
        inline app::GetPlayerTagsRequest_1__Class** type_info() {
            static app::GetPlayerTagsRequest_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPlayerTagsRequest_1__Class**)(modloader::win::memory::resolve_rva(0x04785C80));
            }
            return cache;
        }
        inline app::GetPlayerTagsRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerTagsRequest_1__Class>(type_info(), "PlayFab.ServerModels", "GetPlayerTagsRequest");
        }
        inline app::GetPlayerTagsRequest_1* create() {
            return il2cpp::create_object<app::GetPlayerTagsRequest_1>(get_class());
        }
    } // namespace GetPlayerTagsRequest_1
} // namespace app::classes::types
