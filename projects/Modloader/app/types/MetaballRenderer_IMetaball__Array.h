#pragma once
#include <Modloader/app/structs/MetaballRenderer_IMetaball__Array.h>
#include <Modloader/app/structs/MetaballRenderer_IMetaball__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MetaballRenderer_IMetaball__Array {
        inline app::MetaballRenderer_IMetaball__Array__Class** type_info() {
            static app::MetaballRenderer_IMetaball__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MetaballRenderer_IMetaball__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MetaballRenderer_IMetaball__Array__Class* get_class() {
            return il2cpp::get_class<app::MetaballRenderer_IMetaball__Array__Class>(type_info(), "Metaballs2D", "MetaballRenderer+IMetaball[]");
        }
        inline app::MetaballRenderer_IMetaball__Array* create() {
            return il2cpp::create_object<app::MetaballRenderer_IMetaball__Array>(get_class());
        }
    } // namespace MetaballRenderer_IMetaball__Array
} // namespace app::classes::types
