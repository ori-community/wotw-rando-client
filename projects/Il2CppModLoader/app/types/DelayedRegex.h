#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DelayedRegex {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DelayedRegex__Class** type_info;
        inline app::DelayedRegex__Class* get_class() {
            return il2cpp::get_class<app::DelayedRegex__Class>(type_info, "System.Net", "DelayedRegex");
        }
        inline app::DelayedRegex* create() {
            return il2cpp::create_object<app::DelayedRegex>(get_class());
        }
    } // namespace DelayedRegex
} // namespace app::classes::types
