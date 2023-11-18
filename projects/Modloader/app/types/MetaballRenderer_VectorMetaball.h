#pragma once
#include <Modloader/app/structs/MetaballRenderer_VectorMetaball.h>
#include <Modloader/app/structs/MetaballRenderer_VectorMetaball__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MetaballRenderer_VectorMetaball {
        inline app::MetaballRenderer_VectorMetaball__Class** type_info() {
            static app::MetaballRenderer_VectorMetaball__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MetaballRenderer_VectorMetaball__Class**)(modloader::win::memory::resolve_rva(0x04730460));
            }
            return cache;
        }
        inline app::MetaballRenderer_VectorMetaball__Class* get_class() {
            return il2cpp::get_nested_class<app::MetaballRenderer_VectorMetaball__Class>(type_info(), "Metaballs2D", "MetaballRenderer", "VectorMetaball");
        }
        inline app::MetaballRenderer_VectorMetaball* create() {
            return il2cpp::create_object<app::MetaballRenderer_VectorMetaball>(get_class());
        }
    } // namespace MetaballRenderer_VectorMetaball
} // namespace app::classes::types
