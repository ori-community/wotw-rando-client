#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberContourMeshCustomAsset__Class.h>
#include <Modloader/app/structs/UberContourMeshCustomAsset.h>

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
