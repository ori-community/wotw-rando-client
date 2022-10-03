#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EarlyZGrid {
        namespace {
            app::EarlyZGrid__Class* type_info_ref = nullptr;
        }
        app::EarlyZGrid__Class** type_info = &type_info_ref;
        inline app::EarlyZGrid__Class* get_class() {
            return il2cpp::get_class<app::EarlyZGrid__Class>(type_info, "Moon.Rendering", "EarlyZGrid");
        }
        inline app::EarlyZGrid* create() {
            return il2cpp::create_object<app::EarlyZGrid>(get_class());
        }
        inline app::EarlyZGrid__Boxed* box(app::EarlyZGrid value) {
            return il2cpp::box_value<app::EarlyZGrid__Boxed>(get_class(), value);
        }
    } // namespace EarlyZGrid
} // namespace app::classes::types
