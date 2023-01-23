#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LightCanvas_CanvasAssetIdentifier__Class.h>
#include <Modloader/app/structs/LightCanvas_CanvasAssetIdentifier.h>

namespace app::classes::types {
    namespace LightCanvas_CanvasAssetIdentifier {
        namespace {
            inline app::LightCanvas_CanvasAssetIdentifier__Class* type_info_ref = nullptr;
        }
        inline app::LightCanvas_CanvasAssetIdentifier__Class** type_info = &type_info_ref;
        inline app::LightCanvas_CanvasAssetIdentifier__Class* get_class() {
            return il2cpp::get_nested_class<app::LightCanvas_CanvasAssetIdentifier__Class>(type_info, "", "LightCanvas", "CanvasAssetIdentifier");
        }
        inline app::LightCanvas_CanvasAssetIdentifier* create() {
            return il2cpp::create_object<app::LightCanvas_CanvasAssetIdentifier>(get_class());
        }
    } // namespace LightCanvas_CanvasAssetIdentifier
} // namespace app::classes::types
