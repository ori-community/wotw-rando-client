#pragma once
#include <Modloader/app/structs/SceneRoot_UnloadSceneCoroutine_d_61.h>
#include <Modloader/app/structs/SceneRoot_UnloadSceneCoroutine_d_61__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneRoot_UnloadSceneCoroutine_d_61 {
        inline app::SceneRoot_UnloadSceneCoroutine_d_61__Class** type_info() {
            static app::SceneRoot_UnloadSceneCoroutine_d_61__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SceneRoot_UnloadSceneCoroutine_d_61__Class**)(modloader::win::memory::resolve_rva(0x047275C0));
            }
            return cache;
        }
        inline app::SceneRoot_UnloadSceneCoroutine_d_61__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneRoot_UnloadSceneCoroutine_d_61__Class>(type_info(), "", "SceneRoot", "<UnloadSceneCoroutine>d__61");
        }
        inline app::SceneRoot_UnloadSceneCoroutine_d_61* create() {
            return il2cpp::create_object<app::SceneRoot_UnloadSceneCoroutine_d_61>(get_class());
        }
    } // namespace SceneRoot_UnloadSceneCoroutine_d_61
} // namespace app::classes::types
