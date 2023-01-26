#pragma once
#include <Modloader/app/structs/MetaballRenderer_TransformMetaball__Array.h>
#include <Modloader/app/structs/MetaballRenderer_TransformMetaball__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MetaballRenderer_TransformMetaball__Array {
        inline app::MetaballRenderer_TransformMetaball__Array__Class** type_info() {
            static app::MetaballRenderer_TransformMetaball__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MetaballRenderer_TransformMetaball__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MetaballRenderer_TransformMetaball__Array__Class* get_class() {
            return il2cpp::get_class<app::MetaballRenderer_TransformMetaball__Array__Class>(type_info(), "Metaballs2D", "MetaballRenderer+TransformMetaball[]");
        }
        inline app::MetaballRenderer_TransformMetaball__Array* create() {
            return il2cpp::create_object<app::MetaballRenderer_TransformMetaball__Array>(get_class());
        }
    } // namespace MetaballRenderer_TransformMetaball__Array
} // namespace app::classes::types
