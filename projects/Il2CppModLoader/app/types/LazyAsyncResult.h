#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LazyAsyncResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LazyAsyncResult__Class** type_info;
        inline app::LazyAsyncResult__Class* get_class() {
            return il2cpp::get_class<app::LazyAsyncResult__Class>(type_info, "System.Net", "LazyAsyncResult");
        }
        inline app::LazyAsyncResult* create() {
            return il2cpp::create_object<app::LazyAsyncResult>(get_class());
        }
    } // namespace LazyAsyncResult
} // namespace app::classes::types
