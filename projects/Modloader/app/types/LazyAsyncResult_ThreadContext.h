#pragma once
#include <Modloader/app/structs/LazyAsyncResult_ThreadContext.h>
#include <Modloader/app/structs/LazyAsyncResult_ThreadContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LazyAsyncResult_ThreadContext {
        inline app::LazyAsyncResult_ThreadContext__Class** type_info() {
            static app::LazyAsyncResult_ThreadContext__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LazyAsyncResult_ThreadContext__Class**)(modloader::win::memory::resolve_rva(0x047779E0));
            }
            return cache;
        }
        inline app::LazyAsyncResult_ThreadContext__Class* get_class() {
            return il2cpp::get_nested_class<app::LazyAsyncResult_ThreadContext__Class>(type_info(), "System.Net", "LazyAsyncResult", "ThreadContext");
        }
        inline app::LazyAsyncResult_ThreadContext* create() {
            return il2cpp::create_object<app::LazyAsyncResult_ThreadContext>(get_class());
        }
    } // namespace LazyAsyncResult_ThreadContext
} // namespace app::classes::types
