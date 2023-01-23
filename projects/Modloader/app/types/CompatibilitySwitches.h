#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CompatibilitySwitches__Class.h>
#include <Modloader/app/structs/CompatibilitySwitches.h>

namespace app::classes::types {
    namespace CompatibilitySwitches {
        inline app::CompatibilitySwitches__Class** type_info = (app::CompatibilitySwitches__Class**)(modloader::win::memory::resolve_rva(0x04765E18));
        inline app::CompatibilitySwitches__Class* get_class() {
            return il2cpp::get_class<app::CompatibilitySwitches__Class>(type_info, "System", "CompatibilitySwitches");
        }
        inline app::CompatibilitySwitches* create() {
            return il2cpp::create_object<app::CompatibilitySwitches>(get_class());
        }
    } // namespace CompatibilitySwitches
} // namespace app::classes::types
