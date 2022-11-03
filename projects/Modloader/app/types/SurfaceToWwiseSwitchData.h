#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SurfaceToWwiseSwitchData {
        namespace {
            inline app::SurfaceToWwiseSwitchData__Class* type_info_ref = nullptr;
        }
        inline app::SurfaceToWwiseSwitchData__Class** type_info = &type_info_ref;
        inline app::SurfaceToWwiseSwitchData__Class* get_class() {
            return il2cpp::get_class<app::SurfaceToWwiseSwitchData__Class>(type_info, "", "SurfaceToWwiseSwitchData");
        }
        inline app::SurfaceToWwiseSwitchData* create() {
            return il2cpp::create_object<app::SurfaceToWwiseSwitchData>(get_class());
        }
    } // namespace SurfaceToWwiseSwitchData
} // namespace app::classes::types
