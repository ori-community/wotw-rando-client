#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RunInstallerAttribute {
        inline app::RunInstallerAttribute__Class** type_info = (app::RunInstallerAttribute__Class**)(modloader::win::memory::resolve_rva(0x04781D88));
        inline app::RunInstallerAttribute__Class* get_class() {
            return il2cpp::get_class<app::RunInstallerAttribute__Class>(type_info, "System.ComponentModel", "RunInstallerAttribute");
        }
        inline app::RunInstallerAttribute* create() {
            return il2cpp::create_object<app::RunInstallerAttribute>(get_class());
        }
    } // namespace RunInstallerAttribute
} // namespace app::classes::types
