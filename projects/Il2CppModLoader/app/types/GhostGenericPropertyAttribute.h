#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GhostGenericPropertyAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GhostGenericPropertyAttribute__Class** type_info;
        inline app::GhostGenericPropertyAttribute__Class* get_class() {
            return il2cpp::get_class<app::GhostGenericPropertyAttribute__Class>(type_info, "", "GhostGenericPropertyAttribute");
        }
        inline app::GhostGenericPropertyAttribute* create() {
            return il2cpp::create_object<app::GhostGenericPropertyAttribute>(get_class());
        }
    } // namespace GhostGenericPropertyAttribute
} // namespace app::classes::types
