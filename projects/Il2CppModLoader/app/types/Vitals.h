#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Vitals {
        namespace {
            app::Vitals__Class* type_info_ref = nullptr;
        }
        app::Vitals__Class** type_info = &type_info_ref;
        inline app::Vitals__Class* get_class() {
            return il2cpp::get_class<app::Vitals__Class>(type_info, "Moon", "Vitals");
        }
        inline app::Vitals* create() {
            return il2cpp::create_object<app::Vitals>(get_class());
        }
    } // namespace Vitals
} // namespace app::classes::types
