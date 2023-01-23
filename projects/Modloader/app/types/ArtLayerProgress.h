#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ArtLayerProgress__Class.h>
#include <Modloader/app/structs/ArtLayerProgress.h>

namespace app::classes::types {
    namespace ArtLayerProgress {
        namespace {
            inline app::ArtLayerProgress__Class* type_info_ref = nullptr;
        }
        inline app::ArtLayerProgress__Class** type_info = &type_info_ref;
        inline app::ArtLayerProgress__Class* get_class() {
            return il2cpp::get_class<app::ArtLayerProgress__Class>(type_info, "Moon.EditorTools.SceneTracking", "ArtLayerProgress");
        }
        inline app::ArtLayerProgress* create() {
            return il2cpp::create_object<app::ArtLayerProgress>(get_class());
        }
    } // namespace ArtLayerProgress
} // namespace app::classes::types
