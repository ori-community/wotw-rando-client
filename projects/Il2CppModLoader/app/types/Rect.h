#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Rect {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Rect__Class** type_info;
        inline app::Rect__Class* get_class() {
            return il2cpp::get_class<app::Rect__Class>(type_info, "UnityEngine", "Rect");
        }
        inline app::Rect* create() {
            return il2cpp::create_object<app::Rect>(get_class());
        }
        inline app::Rect__Boxed* box(app::Rect value) {
            return il2cpp::box_value<app::Rect__Boxed>(get_class(), value);
        }
        inline app::Rect__Array* create_array(int size) {
            return il2cpp::array_new<app::Rect__Array>(get_class(), size);
        }
    } // namespace Rect
} // namespace app::classes::types
#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RECT {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RECT__Class** type_info;
        inline app::RECT__Class* get_class() {
            return il2cpp::get_class<app::RECT__Class>(type_info, "", "RECT");
        }
        inline app::RECT* create() {
            return il2cpp::create_object<app::RECT>(get_class());
        }
        inline app::RECT__Boxed* box(app::RECT value) {
            return il2cpp::box_value<app::RECT__Boxed>(get_class(), value);
        }
    } // namespace RECT
} // namespace app::classes::types
