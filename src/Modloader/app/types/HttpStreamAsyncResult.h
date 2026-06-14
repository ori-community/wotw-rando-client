#pragma once
#include <Modloader/app/structs/HttpStreamAsyncResult.h>
#include <Modloader/app/structs/HttpStreamAsyncResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HttpStreamAsyncResult {
        inline app::HttpStreamAsyncResult__Class** type_info() {
            static app::HttpStreamAsyncResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HttpStreamAsyncResult__Class**)(modloader::win::memory::resolve_rva(0x047187F8));
            }
            return cache;
        }
        inline app::HttpStreamAsyncResult__Class* get_class() {
            return il2cpp::get_class<app::HttpStreamAsyncResult__Class>(type_info(), "System.Net", "HttpStreamAsyncResult");
        }
        inline app::HttpStreamAsyncResult* create() {
            return il2cpp::create_object<app::HttpStreamAsyncResult>(get_class());
        }
    } // namespace HttpStreamAsyncResult
} // namespace app::classes::types
