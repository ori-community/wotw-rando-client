#pragma once
#include <Modloader/app/structs/SceneLoadingQueue_QueueListComparer.h>
#include <Modloader/app/structs/SceneLoadingQueue_QueueListComparer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneLoadingQueue_QueueListComparer {
        inline app::SceneLoadingQueue_QueueListComparer__Class** type_info() {
            static app::SceneLoadingQueue_QueueListComparer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SceneLoadingQueue_QueueListComparer__Class**)(modloader::win::memory::resolve_rva(0x04764C48));
            }
            return cache;
        }
        inline app::SceneLoadingQueue_QueueListComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneLoadingQueue_QueueListComparer__Class>(type_info(), "", "SceneLoadingQueue", "QueueListComparer");
        }
        inline app::SceneLoadingQueue_QueueListComparer* create() {
            return il2cpp::create_object<app::SceneLoadingQueue_QueueListComparer>(get_class());
        }
    } // namespace SceneLoadingQueue_QueueListComparer
} // namespace app::classes::types
