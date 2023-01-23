#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BlurOptimized__Class.h>
#include <Modloader/app/structs/BlurOptimized.h>

namespace app::classes::types {
    namespace BlurOptimized {
        namespace {
            inline app::BlurOptimized__Class* type_info_ref = nullptr;
        }
        inline app::BlurOptimized__Class** type_info = &type_info_ref;
        inline app::BlurOptimized__Class* get_class() {
            return il2cpp::get_class<app::BlurOptimized__Class>(type_info, "UnityStandardAssets.ImageEffects", "BlurOptimized");
        }
        inline app::BlurOptimized* create() {
            return il2cpp::create_object<app::BlurOptimized>(get_class());
        }
    } // namespace BlurOptimized
} // namespace app::classes::types
