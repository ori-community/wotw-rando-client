#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VisibleLight {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VisibleLight__Class** type_info;
        inline app::VisibleLight__Class* get_class() {
            return il2cpp::get_class<app::VisibleLight__Class>(type_info, "UnityEngine.Experimental.Rendering", "VisibleLight");
        }
        inline app::VisibleLight* create() {
            return il2cpp::create_object<app::VisibleLight>(get_class());
        }
        inline app::VisibleLight__Boxed* box(app::VisibleLight value) {
            return il2cpp::box_value<app::VisibleLight__Boxed>(get_class(), value);
        }
        inline app::VisibleLight__Array* create_array(int size) {
            return il2cpp::array_new<app::VisibleLight__Array>(get_class(), size);
        }
    } // namespace VisibleLight
} // namespace app::classes::types
