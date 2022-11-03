#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShadingZoneRendererTarget {
        inline app::ShadingZoneRendererTarget__Class** type_info = (app::ShadingZoneRendererTarget__Class**)(modloader::win::memory::resolve_rva(0x04765BA8));
        inline app::ShadingZoneRendererTarget__Class* get_class() {
            return il2cpp::get_class<app::ShadingZoneRendererTarget__Class>(type_info, "", "ShadingZoneRendererTarget");
        }
        inline app::ShadingZoneRendererTarget* create() {
            return il2cpp::create_object<app::ShadingZoneRendererTarget>(get_class());
        }
        inline app::ShadingZoneRendererTarget__Array* create_array(int size) {
            return il2cpp::array_new<app::ShadingZoneRendererTarget__Array>(get_class(), size);
        }
        inline app::ShadingZoneRendererTarget__Array* create_array(const std::vector<app::ShadingZoneRendererTarget*>& items) {
            return il2cpp::array_new<app::ShadingZoneRendererTarget__Array>(get_class(), items);
        }
    } // namespace ShadingZoneRendererTarget
} // namespace app::classes::types
