#pragma once
#include <Modloader/app/structs/HttpHeaders.h>
#include <Modloader/app/structs/HttpHeaders__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HttpHeaders {
        inline app::HttpHeaders__Class** type_info() {
            static app::HttpHeaders__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HttpHeaders__Class**)(modloader::win::memory::resolve_rva(0x047744F8));
            }
            return cache;
        }
        inline app::HttpHeaders__Class* get_class() {
            return il2cpp::get_class<app::HttpHeaders__Class>(type_info(), "System.Net.Http.Headers", "HttpHeaders");
        }
        inline app::HttpHeaders* create() {
            return il2cpp::create_object<app::HttpHeaders>(get_class());
        }
    } // namespace HttpHeaders
} // namespace app::classes::types
