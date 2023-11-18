#pragma once
#include <Modloader/app/structs/ShadingZoneRendererTarget.h>
#include <Modloader/app/structs/ShadingZoneRendererTarget__Array.h>
#include <Modloader/app/structs/ShadingZoneRendererTarget__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShadingZoneRendererTarget {
        inline app::ShadingZoneRendererTarget__Class** type_info() {
            static app::ShadingZoneRendererTarget__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShadingZoneRendererTarget__Class**)(modloader::win::memory::resolve_rva(0x04765BA8));
            }
            return cache;
        }
        inline app::ShadingZoneRendererTarget__Class* get_class() {
            return il2cpp::get_class<app::ShadingZoneRendererTarget__Class>(type_info(), "", "ShadingZoneRendererTarget");
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
