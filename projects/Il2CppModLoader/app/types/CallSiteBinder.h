#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CallSiteBinder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CallSiteBinder__Class** type_info;
        inline app::CallSiteBinder__Class* get_class() {
            return il2cpp::get_class<app::CallSiteBinder__Class>(type_info, "System.Runtime.CompilerServices", "CallSiteBinder");
        }
        inline app::CallSiteBinder* create() {
            return il2cpp::create_object<app::CallSiteBinder>(get_class());
        }
    } // namespace CallSiteBinder
} // namespace app::classes::types
