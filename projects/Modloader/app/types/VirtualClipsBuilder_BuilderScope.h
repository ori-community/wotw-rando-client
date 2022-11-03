#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace VirtualClipsBuilder_BuilderScope {
        inline app::VirtualClipsBuilder_BuilderScope__Class** type_info = (app::VirtualClipsBuilder_BuilderScope__Class**)(modloader::win::memory::resolve_rva(0x04704F80));
        inline app::VirtualClipsBuilder_BuilderScope__Class* get_class() {
            return il2cpp::get_nested_class<app::VirtualClipsBuilder_BuilderScope__Class>(type_info, "", "VirtualClipsBuilder", "BuilderScope");
        }
        inline app::VirtualClipsBuilder_BuilderScope* create() {
            return il2cpp::create_object<app::VirtualClipsBuilder_BuilderScope>(get_class());
        }
        inline app::VirtualClipsBuilder_BuilderScope__Array* create_array(int size) {
            return il2cpp::array_new<app::VirtualClipsBuilder_BuilderScope__Array>(get_class(), size);
        }
        inline app::VirtualClipsBuilder_BuilderScope__Array* create_array(const std::vector<app::VirtualClipsBuilder_BuilderScope*>& items) {
            return il2cpp::array_new<app::VirtualClipsBuilder_BuilderScope__Array>(get_class(), items);
        }
    } // namespace VirtualClipsBuilder_BuilderScope
} // namespace app::classes::types
