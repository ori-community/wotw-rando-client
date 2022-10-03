#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GizmosChangeColor {
        namespace {
            app::GizmosChangeColor__Class* type_info_ref = nullptr;
        }
        app::GizmosChangeColor__Class** type_info = &type_info_ref;
        inline app::GizmosChangeColor__Class* get_class() {
            return il2cpp::get_class<app::GizmosChangeColor__Class>(type_info, "Moon.Gui", "GizmosChangeColor");
        }
        inline app::GizmosChangeColor* create() {
            return il2cpp::create_object<app::GizmosChangeColor>(get_class());
        }
    } // namespace GizmosChangeColor
} // namespace app::classes::types
