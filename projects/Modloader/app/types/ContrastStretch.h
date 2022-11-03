#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ContrastStretch {
        namespace {
            inline app::ContrastStretch__Class* type_info_ref = nullptr;
        }
        inline app::ContrastStretch__Class** type_info = &type_info_ref;
        inline app::ContrastStretch__Class* get_class() {
            return il2cpp::get_class<app::ContrastStretch__Class>(type_info, "UnityStandardAssets.ImageEffects", "ContrastStretch");
        }
        inline app::ContrastStretch* create() {
            return il2cpp::create_object<app::ContrastStretch>(get_class());
        }
    } // namespace ContrastStretch
} // namespace app::classes::types
