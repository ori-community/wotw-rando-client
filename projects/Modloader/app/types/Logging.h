#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Logging__Class.h>
#include <Modloader/app/structs/Logging.h>

namespace app::classes::types {
    namespace Logging {
        inline app::Logging__Class** type_info = (app::Logging__Class**)(modloader::win::memory::resolve_rva(0x04734188));
        inline app::Logging__Class* get_class() {
            return il2cpp::get_class<app::Logging__Class>(type_info, "System.Net", "Logging");
        }
        inline app::Logging* create() {
            return il2cpp::create_object<app::Logging>(get_class());
        }
    } // namespace Logging
} // namespace app::classes::types
