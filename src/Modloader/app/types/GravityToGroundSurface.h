#pragma once
#include <Modloader/app/structs/GravityToGroundSurface.h>
#include <Modloader/app/structs/GravityToGroundSurface__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GravityToGroundSurface {
        inline app::GravityToGroundSurface__Class** type_info() {
            static app::GravityToGroundSurface__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GravityToGroundSurface__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GravityToGroundSurface__Class* get_class() {
            return il2cpp::get_class<app::GravityToGroundSurface__Class>(type_info(), "", "GravityToGroundSurface");
        }
        inline app::GravityToGroundSurface* create() {
            return il2cpp::create_object<app::GravityToGroundSurface>(get_class());
        }
    } // namespace GravityToGroundSurface
} // namespace app::classes::types
