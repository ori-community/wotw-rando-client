#pragma once
#include <Modloader/app/structs/SceneLoadingTest_LoadEmptySceneCoroutine_d_18.h>
#include <Modloader/app/structs/SceneLoadingTest_LoadEmptySceneCoroutine_d_18__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneLoadingTest_LoadEmptySceneCoroutine_d_18 {
        inline app::SceneLoadingTest_LoadEmptySceneCoroutine_d_18__Class** type_info() {
            static app::SceneLoadingTest_LoadEmptySceneCoroutine_d_18__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SceneLoadingTest_LoadEmptySceneCoroutine_d_18__Class**)(modloader::win::memory::resolve_rva(0x0476CA48));
            }
            return cache;
        }
        inline app::SceneLoadingTest_LoadEmptySceneCoroutine_d_18__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneLoadingTest_LoadEmptySceneCoroutine_d_18__Class>(type_info(), "Moon", "SceneLoadingTest", "<LoadEmptySceneCoroutine>d__18");
        }
        inline app::SceneLoadingTest_LoadEmptySceneCoroutine_d_18* create() {
            return il2cpp::create_object<app::SceneLoadingTest_LoadEmptySceneCoroutine_d_18>(get_class());
        }
    } // namespace SceneLoadingTest_LoadEmptySceneCoroutine_d_18
} // namespace app::classes::types
