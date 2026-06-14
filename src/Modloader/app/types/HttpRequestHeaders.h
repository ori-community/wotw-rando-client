#pragma once
#include <Modloader/app/structs/HttpRequestHeaders.h>
#include <Modloader/app/structs/HttpRequestHeaders__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HttpRequestHeaders {
        inline app::HttpRequestHeaders__Class** type_info() {
            static app::HttpRequestHeaders__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HttpRequestHeaders__Class**)(modloader::win::memory::resolve_rva(0x04731D48));
            }
            return cache;
        }
        inline app::HttpRequestHeaders__Class* get_class() {
            return il2cpp::get_class<app::HttpRequestHeaders__Class>(type_info(), "System.Net.Http.Headers", "HttpRequestHeaders");
        }
        inline app::HttpRequestHeaders* create() {
            return il2cpp::create_object<app::HttpRequestHeaders>(get_class());
        }
    } // namespace HttpRequestHeaders
} // namespace app::classes::types
