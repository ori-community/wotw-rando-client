#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Turret_Part__Array {
        namespace {
            app::Turret_Part__Array__Class* type_info_ref = nullptr;
        }
        app::Turret_Part__Array__Class** type_info = &type_info_ref;
        inline app::Turret_Part__Array__Class* get_class() {
            return il2cpp::get_class<app::Turret_Part__Array__Class>(type_info, "RootMotion.Demos", "Turret+Part[]");
        }
        inline app::Turret_Part__Array* create() {
            return il2cpp::create_object<app::Turret_Part__Array>(get_class());
        }
    } // namespace Turret_Part__Array
} // namespace app::classes::types
