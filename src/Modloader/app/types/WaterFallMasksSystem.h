#pragma once
#include <Modloader/app/structs/WaterFallMasksSystem.h>
#include <Modloader/app/structs/WaterFallMasksSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaterFallMasksSystem {
        inline app::WaterFallMasksSystem__Class** type_info() {
            static app::WaterFallMasksSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WaterFallMasksSystem__Class**)(modloader::win::memory::resolve_rva(0x0473BCC0));
            }
            return cache;
        }
        inline app::WaterFallMasksSystem__Class* get_class() {
            return il2cpp::get_class<app::WaterFallMasksSystem__Class>(type_info(), "Moon", "WaterFallMasksSystem");
        }
        inline app::WaterFallMasksSystem* create() {
            return il2cpp::create_object<app::WaterFallMasksSystem>(get_class());
        }
    } // namespace WaterFallMasksSystem
} // namespace app::classes::types
