#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SceneLoadingQueue__Class.h>
#include <Modloader/app/structs/SceneLoadingQueue.h>

namespace app::classes::types {
    namespace SceneLoadingQueue {
        inline app::SceneLoadingQueue__Class** type_info = (app::SceneLoadingQueue__Class**)(modloader::win::memory::resolve_rva(0x0475A910));
        inline app::SceneLoadingQueue__Class* get_class() {
            return il2cpp::get_class<app::SceneLoadingQueue__Class>(type_info, "", "SceneLoadingQueue");
        }
        inline app::SceneLoadingQueue* create() {
            return il2cpp::create_object<app::SceneLoadingQueue>(get_class());
        }
    } // namespace SceneLoadingQueue
} // namespace app::classes::types
