#pragma once
#include <Modloader/app/structs/LaserBeam.h>
#include <Modloader/app/structs/LaserBeam__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LaserBeam {
        inline app::LaserBeam__Class** type_info() {
            static app::LaserBeam__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LaserBeam__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LaserBeam__Class* get_class() {
            return il2cpp::get_class<app::LaserBeam__Class>(type_info(), "", "LaserBeam");
        }
        inline app::LaserBeam* create() {
            return il2cpp::create_object<app::LaserBeam>(get_class());
        }
    } // namespace LaserBeam
} // namespace app::classes::types
