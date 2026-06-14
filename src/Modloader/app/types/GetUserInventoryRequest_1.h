#pragma once
#include <Modloader/app/structs/GetUserInventoryRequest_1.h>
#include <Modloader/app/structs/GetUserInventoryRequest_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetUserInventoryRequest_1 {
        inline app::GetUserInventoryRequest_1__Class** type_info() {
            static app::GetUserInventoryRequest_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetUserInventoryRequest_1__Class**)(modloader::win::memory::resolve_rva(0x0473FBE8));
            }
            return cache;
        }
        inline app::GetUserInventoryRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetUserInventoryRequest_1__Class>(type_info(), "PlayFab.ServerModels", "GetUserInventoryRequest");
        }
        inline app::GetUserInventoryRequest_1* create() {
            return il2cpp::create_object<app::GetUserInventoryRequest_1>(get_class());
        }
    } // namespace GetUserInventoryRequest_1
} // namespace app::classes::types
