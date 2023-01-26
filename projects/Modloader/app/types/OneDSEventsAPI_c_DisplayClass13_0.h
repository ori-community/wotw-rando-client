#pragma once
#include <Modloader/app/structs/OneDSEventsAPI_c_DisplayClass13_0.h>
#include <Modloader/app/structs/OneDSEventsAPI_c_DisplayClass13_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OneDSEventsAPI_c_DisplayClass13_0 {
        inline app::OneDSEventsAPI_c_DisplayClass13_0__Class** type_info() {
            static app::OneDSEventsAPI_c_DisplayClass13_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OneDSEventsAPI_c_DisplayClass13_0__Class**)(modloader::win::memory::resolve_rva(0x04750730));
            }
            return cache;
        }
        inline app::OneDSEventsAPI_c_DisplayClass13_0__Class* get_class() {
            return il2cpp::get_nested_class<app::OneDSEventsAPI_c_DisplayClass13_0__Class>(type_info(), "PlayFab", "OneDSEventsAPI", "<>c__DisplayClass13_0");
        }
        inline app::OneDSEventsAPI_c_DisplayClass13_0* create() {
            return il2cpp::create_object<app::OneDSEventsAPI_c_DisplayClass13_0>(get_class());
        }
    } // namespace OneDSEventsAPI_c_DisplayClass13_0
} // namespace app::classes::types
