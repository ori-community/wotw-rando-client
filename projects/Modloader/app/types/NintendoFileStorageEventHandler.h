#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NintendoFileStorageEventHandler {
        inline app::NintendoFileStorageEventHandler__Class** type_info = (app::NintendoFileStorageEventHandler__Class**)(modloader::win::memory::resolve_rva(0x0470EBC0));
        inline app::NintendoFileStorageEventHandler__Class* get_class() {
            return il2cpp::get_class<app::NintendoFileStorageEventHandler__Class>(type_info, "frameworks.xboxLive", "NintendoFileStorageEventHandler");
        }
        inline app::NintendoFileStorageEventHandler* create() {
            return il2cpp::create_object<app::NintendoFileStorageEventHandler>(get_class());
        }
    } // namespace NintendoFileStorageEventHandler
} // namespace app::classes::types
