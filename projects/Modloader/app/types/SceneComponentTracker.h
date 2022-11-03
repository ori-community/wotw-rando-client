#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneComponentTracker {
        inline app::SceneComponentTracker__Class** type_info = (app::SceneComponentTracker__Class**)(modloader::win::memory::resolve_rva(0x04701D30));
        inline app::SceneComponentTracker__Class* get_class() {
            return il2cpp::get_class<app::SceneComponentTracker__Class>(type_info, "", "SceneComponentTracker");
        }
        inline app::SceneComponentTracker* create() {
            return il2cpp::create_object<app::SceneComponentTracker>(get_class());
        }
    } // namespace SceneComponentTracker
} // namespace app::classes::types
