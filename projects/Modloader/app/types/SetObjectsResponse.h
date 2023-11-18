#pragma once
#include <Modloader/app/structs/SetObjectsResponse.h>
#include <Modloader/app/structs/SetObjectsResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetObjectsResponse {
        inline app::SetObjectsResponse__Class** type_info() {
            static app::SetObjectsResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SetObjectsResponse__Class**)(modloader::win::memory::resolve_rva(0x04769EC8));
            }
            return cache;
        }
        inline app::SetObjectsResponse__Class* get_class() {
            return il2cpp::get_class<app::SetObjectsResponse__Class>(type_info(), "PlayFab.DataModels", "SetObjectsResponse");
        }
        inline app::SetObjectsResponse* create() {
            return il2cpp::create_object<app::SetObjectsResponse>(get_class());
        }
    } // namespace SetObjectsResponse
} // namespace app::classes::types
