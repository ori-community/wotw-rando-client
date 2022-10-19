#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
