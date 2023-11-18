#pragma once
#include <Modloader/app/structs/RunInstallerAttribute.h>
#include <Modloader/app/structs/RunInstallerAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RunInstallerAttribute {
        inline app::RunInstallerAttribute__Class** type_info() {
            static app::RunInstallerAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RunInstallerAttribute__Class**)(modloader::win::memory::resolve_rva(0x04781D88));
            }
            return cache;
        }
        inline app::RunInstallerAttribute__Class* get_class() {
            return il2cpp::get_class<app::RunInstallerAttribute__Class>(type_info(), "System.ComponentModel", "RunInstallerAttribute");
        }
        inline app::RunInstallerAttribute* create() {
            return il2cpp::create_object<app::RunInstallerAttribute>(get_class());
        }
    } // namespace RunInstallerAttribute
} // namespace app::classes::types
