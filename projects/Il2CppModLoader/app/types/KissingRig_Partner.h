#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KissingRig_Partner {
        namespace {
            app::KissingRig_Partner__Class* type_info_ref = nullptr;
        }
        app::KissingRig_Partner__Class** type_info = &type_info_ref;
        inline app::KissingRig_Partner__Class* get_class() {
            return il2cpp::get_nested_class<app::KissingRig_Partner__Class>(type_info, "RootMotion.Demos", "KissingRig", "Partner");
        }
        inline app::KissingRig_Partner* create() {
            return il2cpp::create_object<app::KissingRig_Partner>(get_class());
        }
    } // namespace KissingRig_Partner
} // namespace app::classes::types
