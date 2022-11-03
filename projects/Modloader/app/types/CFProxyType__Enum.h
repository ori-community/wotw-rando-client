#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CFProxyType__Enum {
        namespace {
            inline app::CFProxyType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::CFProxyType__Enum__Class** type_info = &type_info_ref;
        inline app::CFProxyType__Enum__Class* get_class() {
            return il2cpp::get_class<app::CFProxyType__Enum__Class>(type_info, "Mono.Net", "CFProxyType");
        }
        inline app::CFProxyType__Enum* create() {
            return il2cpp::create_object<app::CFProxyType__Enum>(get_class());
        }
    } // namespace CFProxyType__Enum
} // namespace app::classes::types
