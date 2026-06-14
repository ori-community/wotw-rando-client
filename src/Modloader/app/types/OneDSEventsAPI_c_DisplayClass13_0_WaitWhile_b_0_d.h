#pragma once
#include <Modloader/app/structs/OneDSEventsAPI_c_DisplayClass13_0_WaitWhile_b_0_d.h>
#include <Modloader/app/structs/OneDSEventsAPI_c_DisplayClass13_0_WaitWhile_b_0_d__Boxed.h>
#include <Modloader/app/structs/OneDSEventsAPI_c_DisplayClass13_0_WaitWhile_b_0_d__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OneDSEventsAPI_c_DisplayClass13_0_WaitWhile_b_0_d {
        inline app::OneDSEventsAPI_c_DisplayClass13_0_WaitWhile_b_0_d__Class** type_info() {
            static app::OneDSEventsAPI_c_DisplayClass13_0_WaitWhile_b_0_d__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OneDSEventsAPI_c_DisplayClass13_0_WaitWhile_b_0_d__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OneDSEventsAPI_c_DisplayClass13_0_WaitWhile_b_0_d__Class* get_class() {
            return il2cpp::get_nested_class<app::OneDSEventsAPI_c_DisplayClass13_0_WaitWhile_b_0_d__Class>(type_info(), "PlayFab", "OneDSEventsAPI+<>c__DisplayClass13_0", "<<WaitWhile>b__0>d");
        }
        inline app::OneDSEventsAPI_c_DisplayClass13_0_WaitWhile_b_0_d* create() {
            return il2cpp::create_object<app::OneDSEventsAPI_c_DisplayClass13_0_WaitWhile_b_0_d>(get_class());
        }
        inline app::OneDSEventsAPI_c_DisplayClass13_0_WaitWhile_b_0_d__Boxed* box(app::OneDSEventsAPI_c_DisplayClass13_0_WaitWhile_b_0_d value) {
            return il2cpp::box_value<app::OneDSEventsAPI_c_DisplayClass13_0_WaitWhile_b_0_d__Boxed>(get_class(), value);
        }
    } // namespace OneDSEventsAPI_c_DisplayClass13_0_WaitWhile_b_0_d
} // namespace app::classes::types
