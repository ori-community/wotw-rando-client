#pragma once
#include <Modloader/app/structs/ToggleGroup.h>
#include <Modloader/app/structs/ToggleGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ToggleGroup {
        inline app::ToggleGroup__Class** type_info() {
            static app::ToggleGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ToggleGroup__Class**)(modloader::win::memory::resolve_rva(0x04745F60));
            }
            return cache;
        }
        inline app::ToggleGroup__Class* get_class() {
            return il2cpp::get_class<app::ToggleGroup__Class>(type_info(), "UnityEngine.UI", "ToggleGroup");
        }
        inline app::ToggleGroup* create() {
            return il2cpp::create_object<app::ToggleGroup>(get_class());
        }
    } // namespace ToggleGroup
} // namespace app::classes::types
