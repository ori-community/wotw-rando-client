#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TurningAnimation__Array {
        namespace {
            app::TurningAnimation__Array__Class* type_info_ref = nullptr;
        }
        app::TurningAnimation__Array__Class** type_info = &type_info_ref;
        inline app::TurningAnimation__Array__Class* get_class() {
            return il2cpp::get_class<app::TurningAnimation__Array__Class>(type_info, "Moon", "TurningAnimation[]");
        }
        inline app::TurningAnimation__Array* create() {
            return il2cpp::create_object<app::TurningAnimation__Array>(get_class());
        }
    } // namespace TurningAnimation__Array
} // namespace app::classes::types
