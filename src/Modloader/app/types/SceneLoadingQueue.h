#pragma once
#include <Modloader/app/structs/SceneLoadingQueue.h>
#include <Modloader/app/structs/SceneLoadingQueue__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneLoadingQueue {
        inline app::SceneLoadingQueue__Class** type_info() {
            static app::SceneLoadingQueue__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SceneLoadingQueue__Class**)(modloader::win::memory::resolve_rva(0x0475A910));
            }
            return cache;
        }
        inline app::SceneLoadingQueue__Class* get_class() {
            return il2cpp::get_class<app::SceneLoadingQueue__Class>(type_info(), "", "SceneLoadingQueue");
        }
        inline app::SceneLoadingQueue* create() {
            return il2cpp::create_object<app::SceneLoadingQueue>(get_class());
        }
    } // namespace SceneLoadingQueue
} // namespace app::classes::types
