#pragma once
#include <Modloader/app/structs/CrossSceneReferenceImportData__Array.h>
#include <Modloader/app/structs/CrossSceneReferenceImportData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CrossSceneReferenceImportData__Array {
        inline app::CrossSceneReferenceImportData__Array__Class** type_info() {
            static app::CrossSceneReferenceImportData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CrossSceneReferenceImportData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CrossSceneReferenceImportData__Array__Class* get_class() {
            return il2cpp::get_class<app::CrossSceneReferenceImportData__Array__Class>(type_info(), "Moon", "CrossSceneReferenceImportData[]");
        }
        inline app::CrossSceneReferenceImportData__Array* create() {
            return il2cpp::create_object<app::CrossSceneReferenceImportData__Array>(get_class());
        }
    } // namespace CrossSceneReferenceImportData__Array
} // namespace app::classes::types
