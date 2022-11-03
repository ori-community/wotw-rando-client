#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneTrackingChange {
        inline app::SceneTrackingChange__Class** type_info = (app::SceneTrackingChange__Class**)(modloader::win::memory::resolve_rva(0x04790580));
        inline app::SceneTrackingChange__Class* get_class() {
            return il2cpp::get_class<app::SceneTrackingChange__Class>(type_info, "Moon.EditorTools.SceneTracking", "SceneTrackingChange");
        }
        inline app::SceneTrackingChange* create() {
            return il2cpp::create_object<app::SceneTrackingChange>(get_class());
        }
        inline app::SceneTrackingChange__Array* create_array(int size) {
            return il2cpp::array_new<app::SceneTrackingChange__Array>(get_class(), size);
        }
        inline app::SceneTrackingChange__Array* create_array(const std::vector<app::SceneTrackingChange*>& items) {
            return il2cpp::array_new<app::SceneTrackingChange__Array>(get_class(), items);
        }
    } // namespace SceneTrackingChange
} // namespace app::classes::types
