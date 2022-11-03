#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NintendoSwitch {
        inline app::NintendoSwitch__Class** type_info = (app::NintendoSwitch__Class**)(modloader::win::memory::resolve_rva(0x04773C68));
        inline app::NintendoSwitch__Class* get_class() {
            return il2cpp::get_class<app::NintendoSwitch__Class>(type_info, "", "NintendoSwitch");
        }
        inline app::NintendoSwitch* create() {
            return il2cpp::create_object<app::NintendoSwitch>(get_class());
        }
    } // namespace NintendoSwitch
} // namespace app::classes::types
