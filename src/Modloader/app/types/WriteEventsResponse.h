#pragma once
#include <Modloader/app/structs/WriteEventsResponse.h>
#include <Modloader/app/structs/WriteEventsResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WriteEventsResponse {
        inline app::WriteEventsResponse__Class** type_info() {
            static app::WriteEventsResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WriteEventsResponse__Class**)(modloader::win::memory::resolve_rva(0x0470D4A8));
            }
            return cache;
        }
        inline app::WriteEventsResponse__Class* get_class() {
            return il2cpp::get_class<app::WriteEventsResponse__Class>(type_info(), "PlayFab.EventsModels", "WriteEventsResponse");
        }
        inline app::WriteEventsResponse* create() {
            return il2cpp::create_object<app::WriteEventsResponse>(get_class());
        }
    } // namespace WriteEventsResponse
} // namespace app::classes::types
