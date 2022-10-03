#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MergablePropertyAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MergablePropertyAttribute__Class** type_info;
        inline app::MergablePropertyAttribute__Class* get_class() {
            return il2cpp::get_class<app::MergablePropertyAttribute__Class>(type_info, "System.ComponentModel", "MergablePropertyAttribute");
        }
        inline app::MergablePropertyAttribute* create() {
            return il2cpp::create_object<app::MergablePropertyAttribute>(get_class());
        }
    } // namespace MergablePropertyAttribute
} // namespace app::classes::types
