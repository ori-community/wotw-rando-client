#pragma once
#include <Modloader/app/structs/WaterFallMask__Array.h>
#include <Modloader/app/structs/WaterFallMask__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaterFallMask__Array {
        inline app::WaterFallMask__Array__Class** type_info() {
            static app::WaterFallMask__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WaterFallMask__Array__Class**)(modloader::win::memory::resolve_rva(0x0475D3D8));
            }
            return cache;
        }
        inline app::WaterFallMask__Array__Class* get_class() {
            return il2cpp::get_class<app::WaterFallMask__Array__Class>(type_info(), "Moon", "WaterFallMask[]");
        }
        inline app::WaterFallMask__Array* create() {
            return il2cpp::create_object<app::WaterFallMask__Array>(get_class());
        }
    } // namespace WaterFallMask__Array
} // namespace app::classes::types
