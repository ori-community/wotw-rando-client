#pragma once
#include <Modloader/app/structs/ArtLayerProgress.h>
#include <Modloader/app/structs/ArtLayerProgress__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ArtLayerProgress {
        inline app::ArtLayerProgress__Class** type_info() {
            static app::ArtLayerProgress__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ArtLayerProgress__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ArtLayerProgress__Class* get_class() {
            return il2cpp::get_class<app::ArtLayerProgress__Class>(type_info(), "Moon.EditorTools.SceneTracking", "ArtLayerProgress");
        }
        inline app::ArtLayerProgress* create() {
            return il2cpp::create_object<app::ArtLayerProgress>(get_class());
        }
    } // namespace ArtLayerProgress
} // namespace app::classes::types
