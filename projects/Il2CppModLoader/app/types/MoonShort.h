#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonShort {
        namespace {
            app::MoonShort__Class* type_info_ref = nullptr;
        }
        app::MoonShort__Class** type_info = &type_info_ref;
        inline app::MoonShort__Class* get_class() {
            return il2cpp::get_class<app::MoonShort__Class>(type_info, "Moon", "MoonShort");
        }
        inline app::MoonShort* create() {
            return il2cpp::create_object<app::MoonShort>(get_class());
        }
    } // namespace MoonShort
} // namespace app::classes::types
