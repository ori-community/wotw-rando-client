#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MetaballRenderer_IMetaball__Class.h>
#include <Modloader/app/structs/MetaballRenderer_IMetaball__Array.h>
#include <Modloader/app/structs/MetaballRenderer_IMetaball.h>

namespace app::classes::types {
    namespace MetaballRenderer_IMetaball {
        inline app::MetaballRenderer_IMetaball__Class** type_info = (app::MetaballRenderer_IMetaball__Class**)(modloader::win::memory::resolve_rva(0x04787DE0));
        inline app::MetaballRenderer_IMetaball__Class* get_class() {
            return il2cpp::get_nested_class<app::MetaballRenderer_IMetaball__Class>(type_info, "Metaballs2D", "MetaballRenderer", "IMetaball");
        }
        inline app::MetaballRenderer_IMetaball__Array* create_array(int size) {
            return il2cpp::array_new<app::MetaballRenderer_IMetaball__Array>(get_class(), size);
        }
        inline app::MetaballRenderer_IMetaball__Array* create_array(const std::vector<app::MetaballRenderer_IMetaball*>& items) {
            return il2cpp::array_new<app::MetaballRenderer_IMetaball__Array>(get_class(), items);
        }
    } // namespace MetaballRenderer_IMetaball
} // namespace app::classes::types
