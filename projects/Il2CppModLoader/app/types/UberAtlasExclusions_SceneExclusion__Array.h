#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberAtlasExclusions_SceneExclusion__Array {
        namespace {
            app::UberAtlasExclusions_SceneExclusion__Array__Class* type_info_ref = nullptr;
        }
        app::UberAtlasExclusions_SceneExclusion__Array__Class** type_info = &type_info_ref;
        inline app::UberAtlasExclusions_SceneExclusion__Array__Class* get_class() {
            return il2cpp::get_class<app::UberAtlasExclusions_SceneExclusion__Array__Class>(type_info, "", "UberAtlasExclusions+SceneExclusion[]");
        }
        inline app::UberAtlasExclusions_SceneExclusion__Array* create() {
            return il2cpp::create_object<app::UberAtlasExclusions_SceneExclusion__Array>(get_class());
        }
    } // namespace UberAtlasExclusions_SceneExclusion__Array
} // namespace app::classes::types
