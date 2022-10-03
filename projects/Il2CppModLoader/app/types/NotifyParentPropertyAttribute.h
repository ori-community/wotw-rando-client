#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NotifyParentPropertyAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NotifyParentPropertyAttribute__Class** type_info;
        inline app::NotifyParentPropertyAttribute__Class* get_class() {
            return il2cpp::get_class<app::NotifyParentPropertyAttribute__Class>(type_info, "System.ComponentModel", "NotifyParentPropertyAttribute");
        }
        inline app::NotifyParentPropertyAttribute* create() {
            return il2cpp::create_object<app::NotifyParentPropertyAttribute>(get_class());
        }
    } // namespace NotifyParentPropertyAttribute
} // namespace app::classes::types
