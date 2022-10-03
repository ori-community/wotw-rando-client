#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVitalsDeathListener__Array {
        namespace {
            app::IVitalsDeathListener__Array__Class* type_info_ref = nullptr;
        }
        app::IVitalsDeathListener__Array__Class** type_info = &type_info_ref;
        inline app::IVitalsDeathListener__Array__Class* get_class() {
            return il2cpp::get_class<app::IVitalsDeathListener__Array__Class>(type_info, "Moon", "IVitalsDeathListener[]");
        }
        inline app::IVitalsDeathListener__Array* create() {
            return il2cpp::create_object<app::IVitalsDeathListener__Array>(get_class());
        }
    } // namespace IVitalsDeathListener__Array
} // namespace app::classes::types
