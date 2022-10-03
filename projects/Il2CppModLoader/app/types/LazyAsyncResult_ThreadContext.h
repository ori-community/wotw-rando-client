#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LazyAsyncResult_ThreadContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LazyAsyncResult_ThreadContext__Class** type_info;
        inline app::LazyAsyncResult_ThreadContext__Class* get_class() {
            return il2cpp::get_nested_class<app::LazyAsyncResult_ThreadContext__Class>(type_info, "System.Net", "LazyAsyncResult", "ThreadContext");
        }
        inline app::LazyAsyncResult_ThreadContext* create() {
            return il2cpp::create_object<app::LazyAsyncResult_ThreadContext>(get_class());
        }
    } // namespace LazyAsyncResult_ThreadContext
} // namespace app::classes::types
