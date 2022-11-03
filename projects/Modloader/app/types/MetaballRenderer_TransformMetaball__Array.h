#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MetaballRenderer_TransformMetaball__Array {
        namespace {
            inline app::MetaballRenderer_TransformMetaball__Array__Class* type_info_ref = nullptr;
        }
        inline app::MetaballRenderer_TransformMetaball__Array__Class** type_info = &type_info_ref;
        inline app::MetaballRenderer_TransformMetaball__Array__Class* get_class() {
            return il2cpp::get_class<app::MetaballRenderer_TransformMetaball__Array__Class>(type_info, "Metaballs2D", "MetaballRenderer+TransformMetaball[]");
        }
        inline app::MetaballRenderer_TransformMetaball__Array* create() {
            return il2cpp::create_object<app::MetaballRenderer_TransformMetaball__Array>(get_class());
        }
    } // namespace MetaballRenderer_TransformMetaball__Array
} // namespace app::classes::types
