#pragma once
#include <Modloader/app/structs/RSAManaged_KeyGeneratedEventHandler_1.h>
#include <Modloader/app/structs/RSAManaged_KeyGeneratedEventHandler_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RSAManaged_KeyGeneratedEventHandler_1 {
        inline app::RSAManaged_KeyGeneratedEventHandler_1__Class** type_info() {
            static app::RSAManaged_KeyGeneratedEventHandler_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RSAManaged_KeyGeneratedEventHandler_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RSAManaged_KeyGeneratedEventHandler_1__Class* get_class() {
            return il2cpp::get_nested_class<app::RSAManaged_KeyGeneratedEventHandler_1__Class>(type_info(), "Mono.Security.Cryptography", "RSAManaged", "KeyGeneratedEventHandler");
        }
        inline app::RSAManaged_KeyGeneratedEventHandler_1* create() {
            return il2cpp::create_object<app::RSAManaged_KeyGeneratedEventHandler_1>(get_class());
        }
    } // namespace RSAManaged_KeyGeneratedEventHandler_1
} // namespace app::classes::types
