#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DebugHelper__Class.h>
#include <Modloader/app/structs/DebugHelper.h>

namespace app::classes::types {
    namespace DebugHelper {
        inline app::DebugHelper__Class** type_info = (app::DebugHelper__Class**)(modloader::win::memory::resolve_rva(0x04773960));
        inline app::DebugHelper__Class* get_class() {
            return il2cpp::get_class<app::DebugHelper__Class>(type_info, "Mono.Security.Protocol.Tls", "DebugHelper");
        }
        inline app::DebugHelper* create() {
            return il2cpp::create_object<app::DebugHelper>(get_class());
        }
    } // namespace DebugHelper
} // namespace app::classes::types
