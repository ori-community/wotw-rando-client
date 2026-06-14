#pragma once
#include <Modloader/app/structs/KissingRig_Partner.h>
#include <Modloader/app/structs/KissingRig_Partner__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KissingRig_Partner {
        inline app::KissingRig_Partner__Class** type_info() {
            static app::KissingRig_Partner__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KissingRig_Partner__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KissingRig_Partner__Class* get_class() {
            return il2cpp::get_nested_class<app::KissingRig_Partner__Class>(type_info(), "RootMotion.Demos", "KissingRig", "Partner");
        }
        inline app::KissingRig_Partner* create() {
            return il2cpp::create_object<app::KissingRig_Partner>(get_class());
        }
    } // namespace KissingRig_Partner
} // namespace app::classes::types
