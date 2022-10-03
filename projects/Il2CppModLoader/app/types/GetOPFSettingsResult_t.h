#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetOPFSettingsResult_t {
        namespace {
            app::GetOPFSettingsResult_t__Class* type_info_ref = nullptr;
        }
        app::GetOPFSettingsResult_t__Class** type_info = &type_info_ref;
        inline app::GetOPFSettingsResult_t__Class* get_class() {
            return il2cpp::get_class<app::GetOPFSettingsResult_t__Class>(type_info, "Steamworks", "GetOPFSettingsResult_t");
        }
        inline app::GetOPFSettingsResult_t* create() {
            return il2cpp::create_object<app::GetOPFSettingsResult_t>(get_class());
        }
        inline app::GetOPFSettingsResult_t__Boxed* box(app::GetOPFSettingsResult_t value) {
            return il2cpp::box_value<app::GetOPFSettingsResult_t__Boxed>(get_class(), value);
        }
    } // namespace GetOPFSettingsResult_t
} // namespace app::classes::types
