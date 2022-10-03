#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CrossSceneReferenceImportData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CrossSceneReferenceImportData__Class** type_info;
        inline app::CrossSceneReferenceImportData__Class* get_class() {
            return il2cpp::get_class<app::CrossSceneReferenceImportData__Class>(type_info, "Moon", "CrossSceneReferenceImportData");
        }
        inline app::CrossSceneReferenceImportData* create() {
            return il2cpp::create_object<app::CrossSceneReferenceImportData>(get_class());
        }
        inline app::CrossSceneReferenceImportData__Array* create_array(int size) {
            return il2cpp::array_new<app::CrossSceneReferenceImportData__Array>(get_class(), size);
        }
    } // namespace CrossSceneReferenceImportData
} // namespace app::classes::types
