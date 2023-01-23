#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IIdentity__Class.h>

namespace app::classes::types {
    namespace IIdentity {
        inline app::IIdentity__Class** type_info = (app::IIdentity__Class**)(modloader::win::memory::resolve_rva(0x04796238));
        inline app::IIdentity__Class* get_class() {
            return il2cpp::get_class<app::IIdentity__Class>(type_info, "System.Security.Principal", "IIdentity");
        }
    } // namespace IIdentity
} // namespace app::classes::types
