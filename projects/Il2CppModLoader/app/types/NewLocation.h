#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NewLocation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NewLocation__Class** type_info;
        inline app::NewLocation__Class* get_class() {
            return il2cpp::get_class<app::NewLocation__Class>(type_info, "TriangleNet", "NewLocation");
        }
        inline app::NewLocation* create() {
            return il2cpp::create_object<app::NewLocation>(get_class());
        }
    } // namespace NewLocation
} // namespace app::classes::types
