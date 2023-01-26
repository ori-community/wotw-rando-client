#pragma once
#include <Modloader/app/structs/ListQosServersResponse.h>
#include <Modloader/app/structs/ListQosServersResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListQosServersResponse {
        inline app::ListQosServersResponse__Class** type_info() {
            static app::ListQosServersResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ListQosServersResponse__Class**)(modloader::win::memory::resolve_rva(0x0472FFE0));
            }
            return cache;
        }
        inline app::ListQosServersResponse__Class* get_class() {
            return il2cpp::get_class<app::ListQosServersResponse__Class>(type_info(), "PlayFab.MultiplayerModels", "ListQosServersResponse");
        }
        inline app::ListQosServersResponse* create() {
            return il2cpp::create_object<app::ListQosServersResponse>(get_class());
        }
    } // namespace ListQosServersResponse
} // namespace app::classes::types
