#pragma once
#include <Modloader/app/structs/WriteEventResponse.h>
#include <Modloader/app/structs/WriteEventResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WriteEventResponse {
        inline app::WriteEventResponse__Class** type_info() {
            static app::WriteEventResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WriteEventResponse__Class**)(modloader::win::memory::resolve_rva(0x04710E40));
            }
            return cache;
        }
        inline app::WriteEventResponse__Class* get_class() {
            return il2cpp::get_class<app::WriteEventResponse__Class>(type_info(), "PlayFab.ClientModels", "WriteEventResponse");
        }
        inline app::WriteEventResponse* create() {
            return il2cpp::create_object<app::WriteEventResponse>(get_class());
        }
    } // namespace WriteEventResponse
} // namespace app::classes::types
