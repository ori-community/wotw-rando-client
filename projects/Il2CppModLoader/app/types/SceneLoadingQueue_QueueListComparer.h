#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneLoadingQueue_QueueListComparer {
        inline app::SceneLoadingQueue_QueueListComparer__Class** type_info = (app::SceneLoadingQueue_QueueListComparer__Class**)(modloader::win::memory::resolve_rva(0x04764C48));
        inline app::SceneLoadingQueue_QueueListComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneLoadingQueue_QueueListComparer__Class>(type_info, "", "SceneLoadingQueue", "QueueListComparer");
        }
        inline app::SceneLoadingQueue_QueueListComparer* create() {
            return il2cpp::create_object<app::SceneLoadingQueue_QueueListComparer>(get_class());
        }
    } // namespace SceneLoadingQueue_QueueListComparer
} // namespace app::classes::types
