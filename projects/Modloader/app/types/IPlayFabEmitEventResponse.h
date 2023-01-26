#pragma once
#include <Modloader/app/structs/IPlayFabEmitEventResponse.h>
#include <Modloader/app/structs/IPlayFabEmitEventResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPlayFabEmitEventResponse {
        inline app::IPlayFabEmitEventResponse__Class** type_info() {
            static app::IPlayFabEmitEventResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IPlayFabEmitEventResponse__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IPlayFabEmitEventResponse__Class* get_class() {
            return il2cpp::get_class<app::IPlayFabEmitEventResponse__Class>(type_info(), "PlayFab", "IPlayFabEmitEventResponse");
        }
    } // namespace IPlayFabEmitEventResponse
} // namespace app::classes::types
