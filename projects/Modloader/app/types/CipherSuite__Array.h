#pragma once
#include <Modloader/app/structs/CipherSuite__Array.h>
#include <Modloader/app/structs/CipherSuite__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CipherSuite__Array {
        inline app::CipherSuite__Array__Class** type_info() {
            static app::CipherSuite__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CipherSuite__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CipherSuite__Array__Class* get_class() {
            return il2cpp::get_class<app::CipherSuite__Array__Class>(type_info(), "Mono.Security.Protocol.Tls", "CipherSuite[]");
        }
        inline app::CipherSuite__Array* create() {
            return il2cpp::create_object<app::CipherSuite__Array>(get_class());
        }
    } // namespace CipherSuite__Array
} // namespace app::classes::types
