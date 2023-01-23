#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/InstallerTypeAttribute__Class.h>
#include <Modloader/app/structs/InstallerTypeAttribute.h>

namespace app::classes::types {
    namespace InstallerTypeAttribute {
        inline app::InstallerTypeAttribute__Class** type_info = (app::InstallerTypeAttribute__Class**)(modloader::win::memory::resolve_rva(0x04756290));
        inline app::InstallerTypeAttribute__Class* get_class() {
            return il2cpp::get_class<app::InstallerTypeAttribute__Class>(type_info, "System.ComponentModel", "InstallerTypeAttribute");
        }
        inline app::InstallerTypeAttribute* create() {
            return il2cpp::create_object<app::InstallerTypeAttribute>(get_class());
        }
    } // namespace InstallerTypeAttribute
} // namespace app::classes::types
