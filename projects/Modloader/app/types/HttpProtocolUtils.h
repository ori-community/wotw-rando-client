#pragma once
#include <Modloader/app/structs/HttpProtocolUtils.h>
#include <Modloader/app/structs/HttpProtocolUtils__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HttpProtocolUtils {
        inline app::HttpProtocolUtils__Class** type_info() {
            static app::HttpProtocolUtils__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HttpProtocolUtils__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HttpProtocolUtils__Class* get_class() {
            return il2cpp::get_class<app::HttpProtocolUtils__Class>(type_info(), "System.Net", "HttpProtocolUtils");
        }
        inline app::HttpProtocolUtils* create() {
            return il2cpp::create_object<app::HttpProtocolUtils>(get_class());
        }
    } // namespace HttpProtocolUtils
} // namespace app::classes::types
