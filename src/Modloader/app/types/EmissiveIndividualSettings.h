#pragma once
#include <Modloader/app/structs/EmissiveIndividualSettings.h>
#include <Modloader/app/structs/EmissiveIndividualSettings__Boxed.h>
#include <Modloader/app/structs/EmissiveIndividualSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EmissiveIndividualSettings {
        inline app::EmissiveIndividualSettings__Class** type_info() {
            static app::EmissiveIndividualSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EmissiveIndividualSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EmissiveIndividualSettings__Class* get_class() {
            return il2cpp::get_class<app::EmissiveIndividualSettings__Class>(type_info(), "", "EmissiveIndividualSettings");
        }
        inline app::EmissiveIndividualSettings* create() {
            return il2cpp::create_object<app::EmissiveIndividualSettings>(get_class());
        }
        inline app::EmissiveIndividualSettings__Boxed* box(app::EmissiveIndividualSettings value) {
            return il2cpp::box_value<app::EmissiveIndividualSettings__Boxed>(get_class(), value);
        }
    } // namespace EmissiveIndividualSettings
} // namespace app::classes::types
