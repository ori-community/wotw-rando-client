#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Locomotion__Array {
        namespace {
            app::Locomotion__Array__Class* type_info_ref = nullptr;
        }
        app::Locomotion__Array__Class** type_info = &type_info_ref;
        inline app::Locomotion__Array__Class* get_class() {
            return il2cpp::get_class<app::Locomotion__Array__Class>(type_info, "Moon", "Locomotion[]");
        }
        inline app::Locomotion__Array* create() {
            return il2cpp::create_object<app::Locomotion__Array>(get_class());
        }
    } // namespace Locomotion__Array
} // namespace app::classes::types
