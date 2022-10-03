#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ArtLayerProgress {
        namespace {
            app::ArtLayerProgress__Class* type_info_ref = nullptr;
        }
        app::ArtLayerProgress__Class** type_info = &type_info_ref;
        inline app::ArtLayerProgress__Class* get_class() {
            return il2cpp::get_class<app::ArtLayerProgress__Class>(type_info, "Moon.EditorTools.SceneTracking", "ArtLayerProgress");
        }
        inline app::ArtLayerProgress* create() {
            return il2cpp::create_object<app::ArtLayerProgress>(get_class());
        }
    } // namespace ArtLayerProgress
} // namespace app::classes::types
