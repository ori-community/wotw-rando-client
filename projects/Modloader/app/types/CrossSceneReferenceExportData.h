#pragma once
#include <Modloader/app/structs/CrossSceneReferenceExportData.h>
#include <Modloader/app/structs/CrossSceneReferenceExportData__Array.h>
#include <Modloader/app/structs/CrossSceneReferenceExportData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CrossSceneReferenceExportData {
        inline app::CrossSceneReferenceExportData__Class** type_info() {
            static app::CrossSceneReferenceExportData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CrossSceneReferenceExportData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CrossSceneReferenceExportData__Class* get_class() {
            return il2cpp::get_class<app::CrossSceneReferenceExportData__Class>(type_info(), "Moon", "CrossSceneReferenceExportData");
        }
        inline app::CrossSceneReferenceExportData* create() {
            return il2cpp::create_object<app::CrossSceneReferenceExportData>(get_class());
        }
        inline app::CrossSceneReferenceExportData__Array* create_array(int size) {
            return il2cpp::array_new<app::CrossSceneReferenceExportData__Array>(get_class(), size);
        }
        inline app::CrossSceneReferenceExportData__Array* create_array(const std::vector<app::CrossSceneReferenceExportData*>& items) {
            return il2cpp::array_new<app::CrossSceneReferenceExportData__Array>(get_class(), items);
        }
    } // namespace CrossSceneReferenceExportData
} // namespace app::classes::types
