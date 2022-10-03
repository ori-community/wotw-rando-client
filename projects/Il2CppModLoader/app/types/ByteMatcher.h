#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ByteMatcher {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ByteMatcher__Class** type_info;
        inline app::ByteMatcher__Class* get_class() {
            return il2cpp::get_class<app::ByteMatcher__Class>(type_info, "System", "ByteMatcher");
        }
        inline app::ByteMatcher* create() {
            return il2cpp::create_object<app::ByteMatcher>(get_class());
        }
    } // namespace ByteMatcher
} // namespace app::classes::types
