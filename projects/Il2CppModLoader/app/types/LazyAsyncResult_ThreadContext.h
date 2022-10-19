#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LazyAsyncResult_ThreadContext {
        inline app::LazyAsyncResult_ThreadContext__Class** type_info = (app::LazyAsyncResult_ThreadContext__Class**)(modloader::win::memory::resolve_rva(0x047779E0));
        inline app::LazyAsyncResult_ThreadContext__Class* get_class() {
            return il2cpp::get_nested_class<app::LazyAsyncResult_ThreadContext__Class>(type_info, "System.Net", "LazyAsyncResult", "ThreadContext");
        }
        inline app::LazyAsyncResult_ThreadContext* create() {
            return il2cpp::create_object<app::LazyAsyncResult_ThreadContext>(get_class());
        }
    } // namespace LazyAsyncResult_ThreadContext
} // namespace app::classes::types
