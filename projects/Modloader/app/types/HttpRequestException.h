#pragma once
#include <Modloader/app/structs/HttpRequestException.h>
#include <Modloader/app/structs/HttpRequestException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HttpRequestException {
        inline app::HttpRequestException__Class** type_info() {
            static app::HttpRequestException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HttpRequestException__Class**)(modloader::win::memory::resolve_rva(0x04720810));
            }
            return cache;
        }
        inline app::HttpRequestException__Class* get_class() {
            return il2cpp::get_class<app::HttpRequestException__Class>(type_info(), "System.Net.Http", "HttpRequestException");
        }
        inline app::HttpRequestException* create() {
            return il2cpp::create_object<app::HttpRequestException>(get_class());
        }
    } // namespace HttpRequestException
} // namespace app::classes::types
