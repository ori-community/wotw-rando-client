#pragma once
#include <Modloader/app/structs/HttpMethod.h>
#include <Modloader/app/structs/HttpMethod__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HttpMethod {
        inline app::HttpMethod__Class** type_info() {
            static app::HttpMethod__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HttpMethod__Class**)(modloader::win::memory::resolve_rva(0x04726B58));
            }
            return cache;
        }
        inline app::HttpMethod__Class* get_class() {
            return il2cpp::get_class<app::HttpMethod__Class>(type_info(), "System.Net.Http", "HttpMethod");
        }
        inline app::HttpMethod* create() {
            return il2cpp::create_object<app::HttpMethod>(get_class());
        }
    } // namespace HttpMethod
} // namespace app::classes::types
