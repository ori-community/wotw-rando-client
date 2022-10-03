#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NavigationType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NavigationType__Enum__Class** type_info;
        inline app::NavigationType__Enum__Class* get_class() {
            return il2cpp::get_class<app::NavigationType__Enum__Class>(type_info, "MoonNavigation", "NavigationType");
        }
        inline app::NavigationType__Enum* create() {
            return il2cpp::create_object<app::NavigationType__Enum>(get_class());
        }
    } // namespace NavigationType__Enum
} // namespace app::classes::types
