#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CipherSuite__Array {
        namespace {
            app::CipherSuite__Array__Class* type_info_ref = nullptr;
        }
        app::CipherSuite__Array__Class** type_info = &type_info_ref;
        inline app::CipherSuite__Array__Class* get_class() {
            return il2cpp::get_class<app::CipherSuite__Array__Class>(type_info, "Mono.Security.Protocol.Tls", "CipherSuite[]");
        }
        inline app::CipherSuite__Array* create() {
            return il2cpp::create_object<app::CipherSuite__Array>(get_class());
        }
    } // namespace CipherSuite__Array
} // namespace app::classes::types
