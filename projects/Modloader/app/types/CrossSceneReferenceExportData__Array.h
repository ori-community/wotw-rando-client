#pragma once
#include <Modloader/app/structs/CrossSceneReferenceExportData__Array.h>
#include <Modloader/app/structs/CrossSceneReferenceExportData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CrossSceneReferenceExportData__Array {
        inline app::CrossSceneReferenceExportData__Array__Class** type_info() {
            static app::CrossSceneReferenceExportData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CrossSceneReferenceExportData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CrossSceneReferenceExportData__Array__Class* get_class() {
            return il2cpp::get_class<app::CrossSceneReferenceExportData__Array__Class>(type_info(), "Moon", "CrossSceneReferenceExportData[]");
        }
        inline app::CrossSceneReferenceExportData__Array* create() {
            return il2cpp::create_object<app::CrossSceneReferenceExportData__Array>(get_class());
        }
    } // namespace CrossSceneReferenceExportData__Array
} // namespace app::classes::types
