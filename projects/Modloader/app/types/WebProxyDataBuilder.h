#pragma once
#include <Modloader/app/structs/WebProxyDataBuilder.h>
#include <Modloader/app/structs/WebProxyDataBuilder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WebProxyDataBuilder {
        inline app::WebProxyDataBuilder__Class** type_info() {
            static app::WebProxyDataBuilder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WebProxyDataBuilder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WebProxyDataBuilder__Class* get_class() {
            return il2cpp::get_class<app::WebProxyDataBuilder__Class>(type_info(), "System.Net", "WebProxyDataBuilder");
        }
        inline app::WebProxyDataBuilder* create() {
            return il2cpp::create_object<app::WebProxyDataBuilder>(get_class());
        }
    } // namespace WebProxyDataBuilder
} // namespace app::classes::types
