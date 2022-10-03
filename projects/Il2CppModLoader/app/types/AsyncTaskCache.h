#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AsyncTaskCache {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AsyncTaskCache__Class** type_info;
        inline app::AsyncTaskCache__Class* get_class() {
            return il2cpp::get_class<app::AsyncTaskCache__Class>(type_info, "System.Runtime.CompilerServices", "AsyncTaskCache");
        }
        inline app::AsyncTaskCache* create() {
            return il2cpp::create_object<app::AsyncTaskCache>(get_class());
        }
    } // namespace AsyncTaskCache
} // namespace app::classes::types
