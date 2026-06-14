#pragma once
#include <Modloader/app/structs/ClientIdentity.h>
#include <Modloader/app/structs/ClientIdentity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ClientIdentity {
        inline app::ClientIdentity__Class** type_info() {
            static app::ClientIdentity__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ClientIdentity__Class**)(modloader::win::memory::resolve_rva(0x0475B150));
            }
            return cache;
        }
        inline app::ClientIdentity__Class* get_class() {
            return il2cpp::get_class<app::ClientIdentity__Class>(type_info(), "System.Runtime.Remoting", "ClientIdentity");
        }
        inline app::ClientIdentity* create() {
            return il2cpp::create_object<app::ClientIdentity>(get_class());
        }
    } // namespace ClientIdentity
} // namespace app::classes::types
