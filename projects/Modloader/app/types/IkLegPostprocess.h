#pragma once
#include <Modloader/app/structs/IkLegPostprocess.h>
#include <Modloader/app/structs/IkLegPostprocess__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IkLegPostprocess {
        inline app::IkLegPostprocess__Class** type_info() {
            static app::IkLegPostprocess__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IkLegPostprocess__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IkLegPostprocess__Class* get_class() {
            return il2cpp::get_class<app::IkLegPostprocess__Class>(type_info(), "Moon", "IkLegPostprocess");
        }
        inline app::IkLegPostprocess* create() {
            return il2cpp::create_object<app::IkLegPostprocess>(get_class());
        }
    } // namespace IkLegPostprocess
} // namespace app::classes::types
