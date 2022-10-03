#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GrabbableSurface_PositionInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GrabbableSurface_PositionInfo__Class** type_info;
        inline app::GrabbableSurface_PositionInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::GrabbableSurface_PositionInfo__Class>(type_info, "", "GrabbableSurface", "PositionInfo");
        }
        inline app::GrabbableSurface_PositionInfo* create() {
            return il2cpp::create_object<app::GrabbableSurface_PositionInfo>(get_class());
        }
    } // namespace GrabbableSurface_PositionInfo
} // namespace app::classes::types
