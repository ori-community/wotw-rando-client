#pragma once
#include <Modloader/app/structs/OidGroup__Enum_1.h>
#include <Modloader/app/structs/OidGroup__Enum_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OidGroup__Enum_1 {
        inline app::OidGroup__Enum_1__Class** type_info() {
            static app::OidGroup__Enum_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OidGroup__Enum_1__Class**)(modloader::win::memory::resolve_rva(0x0474D788));
            }
            return cache;
        }
        inline app::OidGroup__Enum_1__Class* get_class() {
            return il2cpp::get_class<app::OidGroup__Enum_1__Class>(type_info(), "System.Security.Cryptography.X509Certificates", "OidGroup");
        }
        inline app::OidGroup__Enum_1* create() {
            return il2cpp::create_object<app::OidGroup__Enum_1>(get_class());
        }
    } // namespace OidGroup__Enum_1
} // namespace app::classes::types
