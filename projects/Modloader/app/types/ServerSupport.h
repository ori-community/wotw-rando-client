#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ServerSupport__Class.h>
#include <Modloader/app/structs/ServerSupport.h>

namespace app::classes::types {
    namespace ServerSupport {
        inline app::ServerSupport__Class** type_info = (app::ServerSupport__Class**)(modloader::win::memory::resolve_rva(0x04788E50));
        inline app::ServerSupport__Class* get_class() {
            return il2cpp::get_class<app::ServerSupport__Class>(type_info, "", "ServerSupport");
        }
        inline app::ServerSupport* create() {
            return il2cpp::create_object<app::ServerSupport>(get_class());
        }
    } // namespace ServerSupport
} // namespace app::classes::types
