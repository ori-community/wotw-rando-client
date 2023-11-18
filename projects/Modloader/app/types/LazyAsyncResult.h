#pragma once
#include <Modloader/app/structs/LazyAsyncResult.h>
#include <Modloader/app/structs/LazyAsyncResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LazyAsyncResult {
        inline app::LazyAsyncResult__Class** type_info() {
            static app::LazyAsyncResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LazyAsyncResult__Class**)(modloader::win::memory::resolve_rva(0x0476F6B0));
            }
            return cache;
        }
        inline app::LazyAsyncResult__Class* get_class() {
            return il2cpp::get_class<app::LazyAsyncResult__Class>(type_info(), "System.Net", "LazyAsyncResult");
        }
        inline app::LazyAsyncResult* create() {
            return il2cpp::create_object<app::LazyAsyncResult>(get_class());
        }
    } // namespace LazyAsyncResult
} // namespace app::classes::types
