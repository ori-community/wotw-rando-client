#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Dropdown__Class.h>
#include <Modloader/app/structs/Dropdown.h>

namespace app::classes::types {
    namespace Dropdown {
        inline app::Dropdown__Class** type_info = (app::Dropdown__Class**)(modloader::win::memory::resolve_rva(0x04713CF8));
        inline app::Dropdown__Class* get_class() {
            return il2cpp::get_class<app::Dropdown__Class>(type_info, "UnityEngine.UI", "Dropdown");
        }
        inline app::Dropdown* create() {
            return il2cpp::create_object<app::Dropdown>(get_class());
        }
    } // namespace Dropdown
} // namespace app::classes::types
