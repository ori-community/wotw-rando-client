#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LazyAsyncResult {
        inline app::LazyAsyncResult__Class** type_info = (app::LazyAsyncResult__Class**)(modloader::win::memory::resolve_rva(0x0476F6B0));
        inline app::LazyAsyncResult__Class* get_class() {
            return il2cpp::get_class<app::LazyAsyncResult__Class>(type_info, "System.Net", "LazyAsyncResult");
        }
        inline app::LazyAsyncResult* create() {
            return il2cpp::create_object<app::LazyAsyncResult>(get_class());
        }
    } // namespace LazyAsyncResult
} // namespace app::classes::types
