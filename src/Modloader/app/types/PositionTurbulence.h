#pragma once
#include <Modloader/app/structs/PositionTurbulence.h>
#include <Modloader/app/structs/PositionTurbulence__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PositionTurbulence {
        inline app::PositionTurbulence__Class** type_info() {
            static app::PositionTurbulence__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PositionTurbulence__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PositionTurbulence__Class* get_class() {
            return il2cpp::get_class<app::PositionTurbulence__Class>(type_info(), "", "PositionTurbulence");
        }
        inline app::PositionTurbulence* create() {
            return il2cpp::create_object<app::PositionTurbulence>(get_class());
        }
    } // namespace PositionTurbulence
} // namespace app::classes::types
