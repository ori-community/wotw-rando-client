#pragma once
#include <Modloader/app/structs/Vitals_SpecialHealthType__Enum.h>
#include <Modloader/app/structs/Vitals_SpecialHealthType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Vitals_SpecialHealthType__Enum {
        inline app::Vitals_SpecialHealthType__Enum__Class** type_info() {
            static app::Vitals_SpecialHealthType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Vitals_SpecialHealthType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Vitals_SpecialHealthType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Vitals_SpecialHealthType__Enum__Class>(type_info(), "Moon", "Vitals", "SpecialHealthType");
        }
        inline app::Vitals_SpecialHealthType__Enum* create() {
            return il2cpp::create_object<app::Vitals_SpecialHealthType__Enum>(get_class());
        }
    } // namespace Vitals_SpecialHealthType__Enum
} // namespace app::classes::types
