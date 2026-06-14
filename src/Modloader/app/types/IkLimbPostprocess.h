#pragma once
#include <Modloader/app/structs/IkLimbPostprocess.h>
#include <Modloader/app/structs/IkLimbPostprocess__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IkLimbPostprocess {
        inline app::IkLimbPostprocess__Class** type_info() {
            static app::IkLimbPostprocess__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IkLimbPostprocess__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IkLimbPostprocess__Class* get_class() {
            return il2cpp::get_class<app::IkLimbPostprocess__Class>(type_info(), "Moon", "IkLimbPostprocess");
        }
        inline app::IkLimbPostprocess* create() {
            return il2cpp::create_object<app::IkLimbPostprocess>(get_class());
        }
    } // namespace IkLimbPostprocess
} // namespace app::classes::types
