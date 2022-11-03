#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HttpProtocolUtils {
        namespace {
            inline app::HttpProtocolUtils__Class* type_info_ref = nullptr;
        }
        inline app::HttpProtocolUtils__Class** type_info = &type_info_ref;
        inline app::HttpProtocolUtils__Class* get_class() {
            return il2cpp::get_class<app::HttpProtocolUtils__Class>(type_info, "System.Net", "HttpProtocolUtils");
        }
        inline app::HttpProtocolUtils* create() {
            return il2cpp::create_object<app::HttpProtocolUtils>(get_class());
        }
    } // namespace HttpProtocolUtils
} // namespace app::classes::types
