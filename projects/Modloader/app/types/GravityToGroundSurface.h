#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GravityToGroundSurface__Class.h>
#include <Modloader/app/structs/GravityToGroundSurface.h>

namespace app::classes::types {
    namespace GravityToGroundSurface {
        namespace {
            inline app::GravityToGroundSurface__Class* type_info_ref = nullptr;
        }
        inline app::GravityToGroundSurface__Class** type_info = &type_info_ref;
        inline app::GravityToGroundSurface__Class* get_class() {
            return il2cpp::get_class<app::GravityToGroundSurface__Class>(type_info, "", "GravityToGroundSurface");
        }
        inline app::GravityToGroundSurface* create() {
            return il2cpp::create_object<app::GravityToGroundSurface>(get_class());
        }
    } // namespace GravityToGroundSurface
} // namespace app::classes::types
