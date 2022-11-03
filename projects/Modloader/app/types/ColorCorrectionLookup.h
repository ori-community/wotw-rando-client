#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ColorCorrectionLookup {
        namespace {
            inline app::ColorCorrectionLookup__Class* type_info_ref = nullptr;
        }
        inline app::ColorCorrectionLookup__Class** type_info = &type_info_ref;
        inline app::ColorCorrectionLookup__Class* get_class() {
            return il2cpp::get_class<app::ColorCorrectionLookup__Class>(type_info, "UnityStandardAssets.ImageEffects", "ColorCorrectionLookup");
        }
        inline app::ColorCorrectionLookup* create() {
            return il2cpp::create_object<app::ColorCorrectionLookup>(get_class());
        }
    } // namespace ColorCorrectionLookup
} // namespace app::classes::types
