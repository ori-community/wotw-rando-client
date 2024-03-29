#pragma once
#include <Modloader/app/structs/OneDSEventsAPI.h>
#include <Modloader/app/structs/OneDSEventsAPI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OneDSEventsAPI {
        inline app::OneDSEventsAPI__Class** type_info() {
            static app::OneDSEventsAPI__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OneDSEventsAPI__Class**)(modloader::win::memory::resolve_rva(0x04791EE8));
            }
            return cache;
        }
        inline app::OneDSEventsAPI__Class* get_class() {
            return il2cpp::get_class<app::OneDSEventsAPI__Class>(type_info(), "PlayFab", "OneDSEventsAPI");
        }
        inline app::OneDSEventsAPI* create() {
            return il2cpp::create_object<app::OneDSEventsAPI>(get_class());
        }
    } // namespace OneDSEventsAPI
} // namespace app::classes::types
