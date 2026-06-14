#pragma once
#include <Modloader/app/structs/TlsProtocols__Enum.h>
#include <Modloader/app/structs/TlsProtocols__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TlsProtocols__Enum {
        inline app::TlsProtocols__Enum__Class** type_info() {
            static app::TlsProtocols__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TlsProtocols__Enum__Class**)(modloader::win::memory::resolve_rva(0x04782578));
            }
            return cache;
        }
        inline app::TlsProtocols__Enum__Class* get_class() {
            return il2cpp::get_class<app::TlsProtocols__Enum__Class>(type_info(), "Mono.Security.Interface", "TlsProtocols");
        }
        inline app::TlsProtocols__Enum* create() {
            return il2cpp::create_object<app::TlsProtocols__Enum>(get_class());
        }
    } // namespace TlsProtocols__Enum
} // namespace app::classes::types
