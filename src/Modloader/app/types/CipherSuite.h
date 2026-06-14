#pragma once
#include <Modloader/app/structs/CipherSuite.h>
#include <Modloader/app/structs/CipherSuite__Array.h>
#include <Modloader/app/structs/CipherSuite__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CipherSuite {
        inline app::CipherSuite__Class** type_info() {
            static app::CipherSuite__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CipherSuite__Class**)(modloader::win::memory::resolve_rva(0x04762B60));
            }
            return cache;
        }
        inline app::CipherSuite__Class* get_class() {
            return il2cpp::get_class<app::CipherSuite__Class>(type_info(), "Mono.Security.Protocol.Tls", "CipherSuite");
        }
        inline app::CipherSuite* create() {
            return il2cpp::create_object<app::CipherSuite>(get_class());
        }
        inline app::CipherSuite__Array* create_array(int size) {
            return il2cpp::array_new<app::CipherSuite__Array>(get_class(), size);
        }
        inline app::CipherSuite__Array* create_array(const std::vector<app::CipherSuite*>& items) {
            return il2cpp::array_new<app::CipherSuite__Array>(get_class(), items);
        }
    } // namespace CipherSuite
} // namespace app::classes::types
