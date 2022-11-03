#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EdgeDetection {
        namespace {
            inline app::EdgeDetection__Class* type_info_ref = nullptr;
        }
        inline app::EdgeDetection__Class** type_info = &type_info_ref;
        inline app::EdgeDetection__Class* get_class() {
            return il2cpp::get_class<app::EdgeDetection__Class>(type_info, "UnityStandardAssets.ImageEffects", "EdgeDetection");
        }
        inline app::EdgeDetection* create() {
            return il2cpp::create_object<app::EdgeDetection>(get_class());
        }
    } // namespace EdgeDetection
} // namespace app::classes::types
