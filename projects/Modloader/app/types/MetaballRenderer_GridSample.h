#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MetaballRenderer_GridSample {
        inline app::MetaballRenderer_GridSample__Class** type_info = (app::MetaballRenderer_GridSample__Class**)(modloader::win::memory::resolve_rva(0x04734328));
        inline app::MetaballRenderer_GridSample__Class* get_class() {
            return il2cpp::get_nested_class<app::MetaballRenderer_GridSample__Class>(type_info, "Metaballs2D", "MetaballRenderer", "GridSample");
        }
        inline app::MetaballRenderer_GridSample* create() {
            return il2cpp::create_object<app::MetaballRenderer_GridSample>(get_class());
        }
        inline app::MetaballRenderer_GridSample__Array* create_array(int size) {
            return il2cpp::array_new<app::MetaballRenderer_GridSample__Array>(get_class(), size);
        }
        inline app::MetaballRenderer_GridSample__Array* create_array(const std::vector<app::MetaballRenderer_GridSample*>& items) {
            return il2cpp::array_new<app::MetaballRenderer_GridSample__Array>(get_class(), items);
        }
    } // namespace MetaballRenderer_GridSample
} // namespace app::classes::types
