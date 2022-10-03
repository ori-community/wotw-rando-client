#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Viewport {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Viewport__Class** type_info;
        inline app::Viewport__Class* get_class() {
            return il2cpp::get_class<app::Viewport__Class>(type_info, "Moon.Rendering", "Viewport");
        }
        inline app::Viewport* create() {
            return il2cpp::create_object<app::Viewport>(get_class());
        }
        inline app::Viewport__Boxed* box(app::Viewport value) {
            return il2cpp::box_value<app::Viewport__Boxed>(get_class(), value);
        }
    } // namespace Viewport
} // namespace app::classes::types
