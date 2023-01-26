#pragma once
#include <Modloader/app/structs/CrossSceneReferenceImportRegistry.h>
#include <Modloader/app/structs/CrossSceneReferenceImportRegistry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CrossSceneReferenceImportRegistry {
        inline app::CrossSceneReferenceImportRegistry__Class** type_info() {
            static app::CrossSceneReferenceImportRegistry__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CrossSceneReferenceImportRegistry__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CrossSceneReferenceImportRegistry__Class* get_class() {
            return il2cpp::get_class<app::CrossSceneReferenceImportRegistry__Class>(type_info(), "Moon", "CrossSceneReferenceImportRegistry");
        }
        inline app::CrossSceneReferenceImportRegistry* create() {
            return il2cpp::create_object<app::CrossSceneReferenceImportRegistry>(get_class());
        }
    } // namespace CrossSceneReferenceImportRegistry
} // namespace app::classes::types
