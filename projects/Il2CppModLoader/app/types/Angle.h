#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Angle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Angle__Class** type_info;
        inline app::Angle__Class* get_class() {
            return il2cpp::get_class<app::Angle__Class>(type_info, "Swing", "Angle");
        }
        inline app::Angle* create() {
            return il2cpp::create_object<app::Angle>(get_class());
        }
        inline app::Angle__Boxed* box(app::Angle value) {
            return il2cpp::box_value<app::Angle__Boxed>(get_class(), value);
        }
    } // namespace Angle
} // namespace app::classes::types
