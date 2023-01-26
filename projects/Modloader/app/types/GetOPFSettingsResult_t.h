#pragma once
#include <Modloader/app/structs/GetOPFSettingsResult_t.h>
#include <Modloader/app/structs/GetOPFSettingsResult_t__Boxed.h>
#include <Modloader/app/structs/GetOPFSettingsResult_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetOPFSettingsResult_t {
        inline app::GetOPFSettingsResult_t__Class** type_info() {
            static app::GetOPFSettingsResult_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GetOPFSettingsResult_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GetOPFSettingsResult_t__Class* get_class() {
            return il2cpp::get_class<app::GetOPFSettingsResult_t__Class>(type_info(), "Steamworks", "GetOPFSettingsResult_t");
        }
        inline app::GetOPFSettingsResult_t* create() {
            return il2cpp::create_object<app::GetOPFSettingsResult_t>(get_class());
        }
        inline app::GetOPFSettingsResult_t__Boxed* box(app::GetOPFSettingsResult_t value) {
            return il2cpp::box_value<app::GetOPFSettingsResult_t__Boxed>(get_class(), value);
        }
    } // namespace GetOPFSettingsResult_t
} // namespace app::classes::types
