#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RectExt {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RectExt__Class** type_info;
        inline app::RectExt__Class* get_class() {
            return il2cpp::get_class<app::RectExt__Class>(type_info, "Swing", "RectExt");
        }
        inline app::RectExt* create() {
            return il2cpp::create_object<app::RectExt>(get_class());
        }
        inline app::RectExt__Boxed* box(app::RectExt value) {
            return il2cpp::box_value<app::RectExt__Boxed>(get_class(), value);
        }
    } // namespace RectExt
} // namespace app::classes::types
