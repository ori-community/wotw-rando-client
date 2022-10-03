#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonIconRenderer {
        namespace {
            app::MoonIconRenderer__Class* type_info_ref = nullptr;
        }
        app::MoonIconRenderer__Class** type_info = &type_info_ref;
        inline app::MoonIconRenderer__Class* get_class() {
            return il2cpp::get_class<app::MoonIconRenderer__Class>(type_info, "CatlikeCoding.TextBox", "MoonIconRenderer");
        }
        inline app::MoonIconRenderer* create() {
            return il2cpp::create_object<app::MoonIconRenderer>(get_class());
        }
        inline app::MoonIconRenderer__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonIconRenderer__Array>(get_class(), size);
        }
    } // namespace MoonIconRenderer
} // namespace app::classes::types
