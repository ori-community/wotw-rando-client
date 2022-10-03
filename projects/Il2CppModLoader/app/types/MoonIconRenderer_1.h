#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonIconRenderer_1 {
        namespace {
            app::MoonIconRenderer_1__Class* type_info_ref = nullptr;
        }
        app::MoonIconRenderer_1__Class** type_info = &type_info_ref;
        inline app::MoonIconRenderer_1__Class* get_class() {
            return il2cpp::get_class<app::MoonIconRenderer_1__Class>(type_info, "Moon.UI", "MoonIconRenderer");
        }
        inline app::MoonIconRenderer_1* create() {
            return il2cpp::create_object<app::MoonIconRenderer_1>(get_class());
        }
    } // namespace MoonIconRenderer_1
} // namespace app::classes::types
