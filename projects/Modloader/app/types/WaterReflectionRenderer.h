#pragma once
#include <Modloader/app/structs/WaterReflectionRenderer.h>
#include <Modloader/app/structs/WaterReflectionRenderer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaterReflectionRenderer {
        inline app::WaterReflectionRenderer__Class** type_info() {
            static app::WaterReflectionRenderer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaterReflectionRenderer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaterReflectionRenderer__Class* get_class() {
            return il2cpp::get_class<app::WaterReflectionRenderer__Class>(type_info(), "", "WaterReflectionRenderer");
        }
        inline app::WaterReflectionRenderer* create() {
            return il2cpp::create_object<app::WaterReflectionRenderer>(get_class());
        }
    } // namespace WaterReflectionRenderer
} // namespace app::classes::types
