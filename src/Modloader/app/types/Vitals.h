#pragma once
#include <Modloader/app/structs/Vitals.h>
#include <Modloader/app/structs/Vitals__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Vitals {
        inline app::Vitals__Class** type_info() {
            static app::Vitals__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Vitals__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Vitals__Class* get_class() {
            return il2cpp::get_class<app::Vitals__Class>(type_info(), "Moon", "Vitals");
        }
        inline app::Vitals* create() {
            return il2cpp::create_object<app::Vitals>(get_class());
        }
    } // namespace Vitals
} // namespace app::classes::types
