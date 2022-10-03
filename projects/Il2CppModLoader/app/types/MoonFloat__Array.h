#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonFloat__Array {
        namespace {
            app::MoonFloat__Array__Class* type_info_ref = nullptr;
        }
        app::MoonFloat__Array__Class** type_info = &type_info_ref;
        inline app::MoonFloat__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonFloat__Array__Class>(type_info, "Moon", "MoonFloat[]");
        }
        inline app::MoonFloat__Array* create() {
            return il2cpp::create_object<app::MoonFloat__Array>(get_class());
        }
    } // namespace MoonFloat__Array
} // namespace app::classes::types
