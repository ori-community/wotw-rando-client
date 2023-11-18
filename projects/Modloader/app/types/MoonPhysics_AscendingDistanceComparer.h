#pragma once
#include <Modloader/app/structs/MoonPhysics_AscendingDistanceComparer.h>
#include <Modloader/app/structs/MoonPhysics_AscendingDistanceComparer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonPhysics_AscendingDistanceComparer {
        inline app::MoonPhysics_AscendingDistanceComparer__Class** type_info() {
            static app::MoonPhysics_AscendingDistanceComparer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonPhysics_AscendingDistanceComparer__Class**)(modloader::win::memory::resolve_rva(0x04795768));
            }
            return cache;
        }
        inline app::MoonPhysics_AscendingDistanceComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonPhysics_AscendingDistanceComparer__Class>(type_info(), "", "MoonPhysics", "AscendingDistanceComparer");
        }
        inline app::MoonPhysics_AscendingDistanceComparer* create() {
            return il2cpp::create_object<app::MoonPhysics_AscendingDistanceComparer>(get_class());
        }
    } // namespace MoonPhysics_AscendingDistanceComparer
} // namespace app::classes::types
