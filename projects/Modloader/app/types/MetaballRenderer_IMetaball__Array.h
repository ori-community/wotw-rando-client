#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MetaballRenderer_IMetaball__Array {
        namespace {
            inline app::MetaballRenderer_IMetaball__Array__Class* type_info_ref = nullptr;
        }
        inline app::MetaballRenderer_IMetaball__Array__Class** type_info = &type_info_ref;
        inline app::MetaballRenderer_IMetaball__Array__Class* get_class() {
            return il2cpp::get_class<app::MetaballRenderer_IMetaball__Array__Class>(type_info, "Metaballs2D", "MetaballRenderer+IMetaball[]");
        }
        inline app::MetaballRenderer_IMetaball__Array* create() {
            return il2cpp::create_object<app::MetaballRenderer_IMetaball__Array>(get_class());
        }
    } // namespace MetaballRenderer_IMetaball__Array
} // namespace app::classes::types
