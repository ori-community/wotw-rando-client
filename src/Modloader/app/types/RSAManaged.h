#pragma once
#include <Modloader/app/structs/RSAManaged.h>
#include <Modloader/app/structs/RSAManaged__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RSAManaged {
        inline app::RSAManaged__Class** type_info() {
            static app::RSAManaged__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RSAManaged__Class**)(modloader::win::memory::resolve_rva(0x04750278));
            }
            return cache;
        }
        inline app::RSAManaged__Class* get_class() {
            return il2cpp::get_class<app::RSAManaged__Class>(type_info(), "Mono.Security.Cryptography", "RSAManaged");
        }
        inline app::RSAManaged* create() {
            return il2cpp::create_object<app::RSAManaged>(get_class());
        }
    } // namespace RSAManaged
} // namespace app::classes::types
