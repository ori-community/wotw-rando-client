#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberContourMeshCustomAsset {
        namespace {
            inline app::UberContourMeshCustomAsset__Class* type_info_ref = nullptr;
        }
        inline app::UberContourMeshCustomAsset__Class** type_info = &type_info_ref;
        inline app::UberContourMeshCustomAsset__Class* get_class() {
            return il2cpp::get_class<app::UberContourMeshCustomAsset__Class>(type_info, "", "UberContourMeshCustomAsset");
        }
        inline app::UberContourMeshCustomAsset* create() {
            return il2cpp::create_object<app::UberContourMeshCustomAsset>(get_class());
        }
    } // namespace UberContourMeshCustomAsset
} // namespace app::classes::types
