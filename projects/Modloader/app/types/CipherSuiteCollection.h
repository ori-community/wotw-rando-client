#pragma once
#include <Modloader/app/structs/CipherSuiteCollection.h>
#include <Modloader/app/structs/CipherSuiteCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CipherSuiteCollection {
        inline app::CipherSuiteCollection__Class** type_info() {
            static app::CipherSuiteCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CipherSuiteCollection__Class**)(modloader::win::memory::resolve_rva(0x047032B8));
            }
            return cache;
        }
        inline app::CipherSuiteCollection__Class* get_class() {
            return il2cpp::get_class<app::CipherSuiteCollection__Class>(type_info(), "Mono.Security.Protocol.Tls", "CipherSuiteCollection");
        }
        inline app::CipherSuiteCollection* create() {
            return il2cpp::create_object<app::CipherSuiteCollection>(get_class());
        }
    } // namespace CipherSuiteCollection
} // namespace app::classes::types
