#pragma once
#include <Modloader/app/structs/CompatibilitySwitches.h>
#include <Modloader/app/structs/CompatibilitySwitches__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CompatibilitySwitches {
        inline app::CompatibilitySwitches__Class** type_info() {
            static app::CompatibilitySwitches__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CompatibilitySwitches__Class**)(modloader::win::memory::resolve_rva(0x04765E18));
            }
            return cache;
        }
        inline app::CompatibilitySwitches__Class* get_class() {
            return il2cpp::get_class<app::CompatibilitySwitches__Class>(type_info(), "System", "CompatibilitySwitches");
        }
        inline app::CompatibilitySwitches* create() {
            return il2cpp::create_object<app::CompatibilitySwitches>(get_class());
        }
    } // namespace CompatibilitySwitches
} // namespace app::classes::types
