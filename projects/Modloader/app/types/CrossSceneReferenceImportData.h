#pragma once
#include <Modloader/app/structs/CrossSceneReferenceImportData.h>
#include <Modloader/app/structs/CrossSceneReferenceImportData__Array.h>
#include <Modloader/app/structs/CrossSceneReferenceImportData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CrossSceneReferenceImportData {
        inline app::CrossSceneReferenceImportData__Class** type_info() {
            static app::CrossSceneReferenceImportData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CrossSceneReferenceImportData__Class**)(modloader::win::memory::resolve_rva(0x04719D70));
            }
            return cache;
        }
        inline app::CrossSceneReferenceImportData__Class* get_class() {
            return il2cpp::get_class<app::CrossSceneReferenceImportData__Class>(type_info(), "Moon", "CrossSceneReferenceImportData");
        }
        inline app::CrossSceneReferenceImportData* create() {
            return il2cpp::create_object<app::CrossSceneReferenceImportData>(get_class());
        }
        inline app::CrossSceneReferenceImportData__Array* create_array(int size) {
            return il2cpp::array_new<app::CrossSceneReferenceImportData__Array>(get_class(), size);
        }
        inline app::CrossSceneReferenceImportData__Array* create_array(const std::vector<app::CrossSceneReferenceImportData*>& items) {
            return il2cpp::array_new<app::CrossSceneReferenceImportData__Array>(get_class(), items);
        }
    } // namespace CrossSceneReferenceImportData
} // namespace app::classes::types
