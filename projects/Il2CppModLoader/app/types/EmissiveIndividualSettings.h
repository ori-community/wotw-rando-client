#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EmissiveIndividualSettings {
        namespace {
            app::EmissiveIndividualSettings__Class* type_info_ref = nullptr;
        }
        app::EmissiveIndividualSettings__Class** type_info = &type_info_ref;
        inline app::EmissiveIndividualSettings__Class* get_class() {
            return il2cpp::get_class<app::EmissiveIndividualSettings__Class>(type_info, "", "EmissiveIndividualSettings");
        }
        inline app::EmissiveIndividualSettings* create() {
            return il2cpp::create_object<app::EmissiveIndividualSettings>(get_class());
        }
        inline app::EmissiveIndividualSettings__Boxed* box(app::EmissiveIndividualSettings value) {
            return il2cpp::box_value<app::EmissiveIndividualSettings__Boxed>(get_class(), value);
        }
    } // namespace EmissiveIndividualSettings
} // namespace app::classes::types
