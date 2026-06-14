#pragma once
#include <Modloader/app/structs/SceneInspector.h>
#include <Modloader/app/structs/SceneInspector__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneInspector {
        inline app::SceneInspector__Class** type_info() {
            static app::SceneInspector__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SceneInspector__Class**)(modloader::win::memory::resolve_rva(0x0471F8D0));
            }
            return cache;
        }
        inline app::SceneInspector__Class* get_class() {
            return il2cpp::get_class<app::SceneInspector__Class>(type_info(), "", "SceneInspector");
        }
        inline app::SceneInspector* create() {
            return il2cpp::create_object<app::SceneInspector>(get_class());
        }
    } // namespace SceneInspector
} // namespace app::classes::types
