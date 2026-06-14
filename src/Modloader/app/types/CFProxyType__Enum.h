#pragma once
#include <Modloader/app/structs/CFProxyType__Enum.h>
#include <Modloader/app/structs/CFProxyType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CFProxyType__Enum {
        inline app::CFProxyType__Enum__Class** type_info() {
            static app::CFProxyType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CFProxyType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CFProxyType__Enum__Class* get_class() {
            return il2cpp::get_class<app::CFProxyType__Enum__Class>(type_info(), "Mono.Net", "CFProxyType");
        }
        inline app::CFProxyType__Enum* create() {
            return il2cpp::create_object<app::CFProxyType__Enum>(get_class());
        }
    } // namespace CFProxyType__Enum
} // namespace app::classes::types
