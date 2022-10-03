#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberAtlasExclusions_SceneExclusion {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberAtlasExclusions_SceneExclusion__Class** type_info;
        inline app::UberAtlasExclusions_SceneExclusion__Class* get_class() {
            return il2cpp::get_nested_class<app::UberAtlasExclusions_SceneExclusion__Class>(type_info, "", "UberAtlasExclusions", "SceneExclusion");
        }
        inline app::UberAtlasExclusions_SceneExclusion* create() {
            return il2cpp::create_object<app::UberAtlasExclusions_SceneExclusion>(get_class());
        }
        inline app::UberAtlasExclusions_SceneExclusion__Boxed* box(app::UberAtlasExclusions_SceneExclusion value) {
            return il2cpp::box_value<app::UberAtlasExclusions_SceneExclusion__Boxed>(get_class(), value);
        }
        inline app::UberAtlasExclusions_SceneExclusion__Array* create_array(int size) {
            return il2cpp::array_new<app::UberAtlasExclusions_SceneExclusion__Array>(get_class(), size);
        }
    } // namespace UberAtlasExclusions_SceneExclusion
} // namespace app::classes::types
