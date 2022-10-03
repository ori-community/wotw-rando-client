#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RSAManaged_KeyGeneratedEventHandler_1 {
        namespace {
            app::RSAManaged_KeyGeneratedEventHandler_1__Class* type_info_ref = nullptr;
        }
        app::RSAManaged_KeyGeneratedEventHandler_1__Class** type_info = &type_info_ref;
        inline app::RSAManaged_KeyGeneratedEventHandler_1__Class* get_class() {
            return il2cpp::get_nested_class<app::RSAManaged_KeyGeneratedEventHandler_1__Class>(type_info, "Mono.Security.Cryptography", "RSAManaged", "KeyGeneratedEventHandler");
        }
        inline app::RSAManaged_KeyGeneratedEventHandler_1* create() {
            return il2cpp::create_object<app::RSAManaged_KeyGeneratedEventHandler_1>(get_class());
        }
    } // namespace RSAManaged_KeyGeneratedEventHandler_1
} // namespace app::classes::types
