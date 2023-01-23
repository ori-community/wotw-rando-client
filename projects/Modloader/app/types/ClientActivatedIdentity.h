#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ClientActivatedIdentity__Class.h>
#include <Modloader/app/structs/ClientActivatedIdentity.h>

namespace app::classes::types {
    namespace ClientActivatedIdentity {
        inline app::ClientActivatedIdentity__Class** type_info = (app::ClientActivatedIdentity__Class**)(modloader::win::memory::resolve_rva(0x04707DF8));
        inline app::ClientActivatedIdentity__Class* get_class() {
            return il2cpp::get_class<app::ClientActivatedIdentity__Class>(type_info, "System.Runtime.Remoting", "ClientActivatedIdentity");
        }
        inline app::ClientActivatedIdentity* create() {
            return il2cpp::create_object<app::ClientActivatedIdentity>(get_class());
        }
    } // namespace ClientActivatedIdentity
} // namespace app::classes::types
