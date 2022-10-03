#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SurfaceToWwiseSwitchData {
        namespace {
            app::SurfaceToWwiseSwitchData__Class* type_info_ref = nullptr;
        }
        app::SurfaceToWwiseSwitchData__Class** type_info = &type_info_ref;
        inline app::SurfaceToWwiseSwitchData__Class* get_class() {
            return il2cpp::get_class<app::SurfaceToWwiseSwitchData__Class>(type_info, "", "SurfaceToWwiseSwitchData");
        }
        inline app::SurfaceToWwiseSwitchData* create() {
            return il2cpp::create_object<app::SurfaceToWwiseSwitchData>(get_class());
        }
    } // namespace SurfaceToWwiseSwitchData
} // namespace app::classes::types
