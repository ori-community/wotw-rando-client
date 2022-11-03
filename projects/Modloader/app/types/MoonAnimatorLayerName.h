#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonAnimatorLayerName {
        inline app::MoonAnimatorLayerName__Class** type_info = (app::MoonAnimatorLayerName__Class**)(modloader::win::memory::resolve_rva(0x04786850));
        inline app::MoonAnimatorLayerName__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimatorLayerName__Class>(type_info, "Moon", "MoonAnimatorLayerName");
        }
        inline app::MoonAnimatorLayerName* create() {
            return il2cpp::create_object<app::MoonAnimatorLayerName>(get_class());
        }
        inline app::MoonAnimatorLayerName__Boxed* box(app::MoonAnimatorLayerName value) {
            return il2cpp::box_value<app::MoonAnimatorLayerName__Boxed>(get_class(), value);
        }
    } // namespace MoonAnimatorLayerName
} // namespace app::classes::types
