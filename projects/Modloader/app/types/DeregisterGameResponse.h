#pragma once
#include <Modloader/app/structs/DeregisterGameResponse.h>
#include <Modloader/app/structs/DeregisterGameResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeregisterGameResponse {
        inline app::DeregisterGameResponse__Class** type_info() {
            static app::DeregisterGameResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DeregisterGameResponse__Class**)(modloader::win::memory::resolve_rva(0x04786D48));
            }
            return cache;
        }
        inline app::DeregisterGameResponse__Class* get_class() {
            return il2cpp::get_class<app::DeregisterGameResponse__Class>(type_info(), "PlayFab.ServerModels", "DeregisterGameResponse");
        }
        inline app::DeregisterGameResponse* create() {
            return il2cpp::create_object<app::DeregisterGameResponse>(get_class());
        }
    } // namespace DeregisterGameResponse
} // namespace app::classes::types
