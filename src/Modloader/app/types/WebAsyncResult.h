#pragma once
#include <Modloader/app/structs/WebAsyncResult.h>
#include <Modloader/app/structs/WebAsyncResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WebAsyncResult {
        inline app::WebAsyncResult__Class** type_info() {
            static app::WebAsyncResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WebAsyncResult__Class**)(modloader::win::memory::resolve_rva(0x0476ED78));
            }
            return cache;
        }
        inline app::WebAsyncResult__Class* get_class() {
            return il2cpp::get_class<app::WebAsyncResult__Class>(type_info(), "System.Net", "WebAsyncResult");
        }
        inline app::WebAsyncResult* create() {
            return il2cpp::create_object<app::WebAsyncResult>(get_class());
        }
    } // namespace WebAsyncResult
} // namespace app::classes::types
