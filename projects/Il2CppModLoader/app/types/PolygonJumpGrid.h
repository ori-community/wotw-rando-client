#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PolygonJumpGrid {
        namespace {
            inline app::PolygonJumpGrid__Class* type_info_ref = nullptr;
        }
        inline app::PolygonJumpGrid__Class** type_info = &type_info_ref;
        inline app::PolygonJumpGrid__Class* get_class() {
            return il2cpp::get_class<app::PolygonJumpGrid__Class>(type_info, "", "PolygonJumpGrid");
        }
        inline app::PolygonJumpGrid* create() {
            return il2cpp::create_object<app::PolygonJumpGrid>(get_class());
        }
    } // namespace PolygonJumpGrid
} // namespace app::classes::types
