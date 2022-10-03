#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonInt__Array {
        namespace {
            app::MoonInt__Array__Class* type_info_ref = nullptr;
        }
        app::MoonInt__Array__Class** type_info = &type_info_ref;
        inline app::MoonInt__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonInt__Array__Class>(type_info, "Moon", "MoonInt[]");
        }
        inline app::MoonInt__Array* create() {
            return il2cpp::create_object<app::MoonInt__Array>(get_class());
        }
    } // namespace MoonInt__Array
} // namespace app::classes::types
