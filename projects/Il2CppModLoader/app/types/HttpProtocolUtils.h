#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HttpProtocolUtils {
        namespace {
            app::HttpProtocolUtils__Class* type_info_ref = nullptr;
        }
        app::HttpProtocolUtils__Class** type_info = &type_info_ref;
        inline app::HttpProtocolUtils__Class* get_class() {
            return il2cpp::get_class<app::HttpProtocolUtils__Class>(type_info, "System.Net", "HttpProtocolUtils");
        }
        inline app::HttpProtocolUtils* create() {
            return il2cpp::create_object<app::HttpProtocolUtils>(get_class());
        }
    } // namespace HttpProtocolUtils
} // namespace app::classes::types
