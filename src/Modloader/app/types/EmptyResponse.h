#pragma once
#include <Modloader/app/structs/EmptyResponse.h>
#include <Modloader/app/structs/EmptyResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EmptyResponse {
        inline app::EmptyResponse__Class** type_info() {
            static app::EmptyResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EmptyResponse__Class**)(modloader::win::memory::resolve_rva(0x04754EE8));
            }
            return cache;
        }
        inline app::EmptyResponse__Class* get_class() {
            return il2cpp::get_class<app::EmptyResponse__Class>(type_info(), "PlayFab.ClientModels", "EmptyResponse");
        }
        inline app::EmptyResponse* create() {
            return il2cpp::create_object<app::EmptyResponse>(get_class());
        }
    } // namespace EmptyResponse
} // namespace app::classes::types
