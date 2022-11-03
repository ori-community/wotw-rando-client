#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CompModSwitches {
        inline app::CompModSwitches__Class** type_info = (app::CompModSwitches__Class**)(modloader::win::memory::resolve_rva(0x04758B80));
        inline app::CompModSwitches__Class* get_class() {
            return il2cpp::get_class<app::CompModSwitches__Class>(type_info, "System.ComponentModel", "CompModSwitches");
        }
        inline app::CompModSwitches* create() {
            return il2cpp::create_object<app::CompModSwitches>(get_class());
        }
    } // namespace CompModSwitches
} // namespace app::classes::types
