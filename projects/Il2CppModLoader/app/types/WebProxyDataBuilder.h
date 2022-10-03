#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WebProxyDataBuilder {
        namespace {
            app::WebProxyDataBuilder__Class* type_info_ref = nullptr;
        }
        app::WebProxyDataBuilder__Class** type_info = &type_info_ref;
        inline app::WebProxyDataBuilder__Class* get_class() {
            return il2cpp::get_class<app::WebProxyDataBuilder__Class>(type_info, "System.Net", "WebProxyDataBuilder");
        }
        inline app::WebProxyDataBuilder* create() {
            return il2cpp::create_object<app::WebProxyDataBuilder>(get_class());
        }
    } // namespace WebProxyDataBuilder
} // namespace app::classes::types
