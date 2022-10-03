#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Label {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Label__Class** type_info;
        inline app::Label__Class* get_class() {
            return il2cpp::get_class<app::Label__Class>(type_info, "System.Reflection.Emit", "Label");
        }
        inline app::Label* create() {
            return il2cpp::create_object<app::Label>(get_class());
        }
        inline app::Label__Boxed* box(app::Label value) {
            return il2cpp::box_value<app::Label__Boxed>(get_class(), value);
        }
    } // namespace Label
} // namespace app::classes::types
