#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Vitals_SpecialHealthType__Enum {
        namespace {
            app::Vitals_SpecialHealthType__Enum__Class* type_info_ref = nullptr;
        }
        app::Vitals_SpecialHealthType__Enum__Class** type_info = &type_info_ref;
        inline app::Vitals_SpecialHealthType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Vitals_SpecialHealthType__Enum__Class>(type_info, "Moon", "Vitals", "SpecialHealthType");
        }
        inline app::Vitals_SpecialHealthType__Enum* create() {
            return il2cpp::create_object<app::Vitals_SpecialHealthType__Enum>(get_class());
        }
    } // namespace Vitals_SpecialHealthType__Enum
} // namespace app::classes::types
