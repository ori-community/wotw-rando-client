#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HttpHeaders {
        inline app::HttpHeaders__Class** type_info = (app::HttpHeaders__Class**)(modloader::win::memory::resolve_rva(0x047744F8));
        inline app::HttpHeaders__Class* get_class() {
            return il2cpp::get_class<app::HttpHeaders__Class>(type_info, "System.Net.Http.Headers", "HttpHeaders");
        }
        inline app::HttpHeaders* create() {
            return il2cpp::create_object<app::HttpHeaders>(get_class());
        }
    } // namespace HttpHeaders
} // namespace app::classes::types
