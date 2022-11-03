#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScreenSpaceAmbientObscurance {
        namespace {
            inline app::ScreenSpaceAmbientObscurance__Class* type_info_ref = nullptr;
        }
        inline app::ScreenSpaceAmbientObscurance__Class** type_info = &type_info_ref;
        inline app::ScreenSpaceAmbientObscurance__Class* get_class() {
            return il2cpp::get_class<app::ScreenSpaceAmbientObscurance__Class>(type_info, "UnityStandardAssets.ImageEffects", "ScreenSpaceAmbientObscurance");
        }
        inline app::ScreenSpaceAmbientObscurance* create() {
            return il2cpp::create_object<app::ScreenSpaceAmbientObscurance>(get_class());
        }
    } // namespace ScreenSpaceAmbientObscurance
} // namespace app::classes::types
