#pragma once
#include <Modloader/app/structs/UberAtlasExclusions_SceneExclusion__Array.h>
#include <Modloader/app/structs/UberAtlasExclusions_SceneExclusion__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberAtlasExclusions_SceneExclusion__Array {
        inline app::UberAtlasExclusions_SceneExclusion__Array__Class** type_info() {
            static app::UberAtlasExclusions_SceneExclusion__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberAtlasExclusions_SceneExclusion__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberAtlasExclusions_SceneExclusion__Array__Class* get_class() {
            return il2cpp::get_class<app::UberAtlasExclusions_SceneExclusion__Array__Class>(type_info(), "", "UberAtlasExclusions+SceneExclusion[]");
        }
        inline app::UberAtlasExclusions_SceneExclusion__Array* create() {
            return il2cpp::create_object<app::UberAtlasExclusions_SceneExclusion__Array>(get_class());
        }
    } // namespace UberAtlasExclusions_SceneExclusion__Array
} // namespace app::classes::types
