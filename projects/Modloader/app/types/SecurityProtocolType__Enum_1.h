#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SecurityProtocolType__Enum_1 {
        namespace {
            inline app::SecurityProtocolType__Enum_1__Class* type_info_ref = nullptr;
        }
        inline app::SecurityProtocolType__Enum_1__Class** type_info = &type_info_ref;
        inline app::SecurityProtocolType__Enum_1__Class* get_class() {
            return il2cpp::get_class<app::SecurityProtocolType__Enum_1__Class>(type_info, "Mono.Security.Protocol.Tls", "SecurityProtocolType");
        }
        inline app::SecurityProtocolType__Enum_1* create() {
            return il2cpp::create_object<app::SecurityProtocolType__Enum_1>(get_class());
        }
    } // namespace SecurityProtocolType__Enum_1
} // namespace app::classes::types
