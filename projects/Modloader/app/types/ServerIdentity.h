#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ServerIdentity__Class.h>
#include <Modloader/app/structs/ServerIdentity.h>

namespace app::classes::types {
    namespace ServerIdentity {
        inline app::ServerIdentity__Class** type_info = (app::ServerIdentity__Class**)(modloader::win::memory::resolve_rva(0x04727848));
        inline app::ServerIdentity__Class* get_class() {
            return il2cpp::get_class<app::ServerIdentity__Class>(type_info, "System.Runtime.Remoting", "ServerIdentity");
        }
        inline app::ServerIdentity* create() {
            return il2cpp::create_object<app::ServerIdentity>(get_class());
        }
    } // namespace ServerIdentity
} // namespace app::classes::types
