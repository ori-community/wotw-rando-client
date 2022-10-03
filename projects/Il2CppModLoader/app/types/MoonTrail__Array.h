#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTrail__Array {
        namespace {
            app::MoonTrail__Array__Class* type_info_ref = nullptr;
        }
        app::MoonTrail__Array__Class** type_info = &type_info_ref;
        inline app::MoonTrail__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonTrail__Array__Class>(type_info, "Moon", "MoonTrail[]");
        }
        inline app::MoonTrail__Array* create() {
            return il2cpp::create_object<app::MoonTrail__Array>(get_class());
        }
    } // namespace MoonTrail__Array
} // namespace app::classes::types
