#pragma once
#include <Modloader/app/structs/CompModSwitches.h>
#include <Modloader/app/structs/CompModSwitches__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CompModSwitches {
        inline app::CompModSwitches__Class** type_info() {
            static app::CompModSwitches__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CompModSwitches__Class**)(modloader::win::memory::resolve_rva(0x04758B80));
            }
            return cache;
        }
        inline app::CompModSwitches__Class* get_class() {
            return il2cpp::get_class<app::CompModSwitches__Class>(type_info(), "System.ComponentModel", "CompModSwitches");
        }
        inline app::CompModSwitches* create() {
            return il2cpp::create_object<app::CompModSwitches>(get_class());
        }
    } // namespace CompModSwitches
} // namespace app::classes::types
