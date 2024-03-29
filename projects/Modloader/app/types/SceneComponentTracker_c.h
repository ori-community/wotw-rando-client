#pragma once
#include <Modloader/app/structs/SceneComponentTracker_c.h>
#include <Modloader/app/structs/SceneComponentTracker_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneComponentTracker_c {
        inline app::SceneComponentTracker_c__Class** type_info() {
            static app::SceneComponentTracker_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SceneComponentTracker_c__Class**)(modloader::win::memory::resolve_rva(0x04791148));
            }
            return cache;
        }
        inline app::SceneComponentTracker_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneComponentTracker_c__Class>(type_info(), "", "SceneComponentTracker", "<>c");
        }
        inline app::SceneComponentTracker_c* create() {
            return il2cpp::create_object<app::SceneComponentTracker_c>(get_class());
        }
    } // namespace SceneComponentTracker_c
} // namespace app::classes::types
