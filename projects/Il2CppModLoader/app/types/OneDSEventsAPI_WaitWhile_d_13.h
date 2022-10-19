#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace OneDSEventsAPI_WaitWhile_d_13 {
        namespace {
            inline app::OneDSEventsAPI_WaitWhile_d_13__Class* type_info_ref = nullptr;
        }
        inline app::OneDSEventsAPI_WaitWhile_d_13__Class** type_info = &type_info_ref;
        inline app::OneDSEventsAPI_WaitWhile_d_13__Class* get_class() {
            return il2cpp::get_nested_class<app::OneDSEventsAPI_WaitWhile_d_13__Class>(type_info, "PlayFab", "OneDSEventsAPI", "<WaitWhile>d__13");
        }
        inline app::OneDSEventsAPI_WaitWhile_d_13* create() {
            return il2cpp::create_object<app::OneDSEventsAPI_WaitWhile_d_13>(get_class());
        }
        inline app::OneDSEventsAPI_WaitWhile_d_13__Boxed* box(app::OneDSEventsAPI_WaitWhile_d_13 value) {
            return il2cpp::box_value<app::OneDSEventsAPI_WaitWhile_d_13__Boxed>(get_class(), value);
        }
    } // namespace OneDSEventsAPI_WaitWhile_d_13
} // namespace app::classes::types
