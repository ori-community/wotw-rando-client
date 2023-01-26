#pragma once
#include <Modloader/app/structs/CrossSceneReferenceExportRegistry.h>
#include <Modloader/app/structs/CrossSceneReferenceExportRegistry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CrossSceneReferenceExportRegistry {
        inline app::CrossSceneReferenceExportRegistry__Class** type_info() {
            static app::CrossSceneReferenceExportRegistry__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CrossSceneReferenceExportRegistry__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CrossSceneReferenceExportRegistry__Class* get_class() {
            return il2cpp::get_class<app::CrossSceneReferenceExportRegistry__Class>(type_info(), "Moon", "CrossSceneReferenceExportRegistry");
        }
        inline app::CrossSceneReferenceExportRegistry* create() {
            return il2cpp::create_object<app::CrossSceneReferenceExportRegistry>(get_class());
        }
    } // namespace CrossSceneReferenceExportRegistry
} // namespace app::classes::types
