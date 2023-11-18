#pragma once
#include <Modloader/app/structs/SceneLoadingQueue_c_DisplayClass12_0.h>
#include <Modloader/app/structs/SceneLoadingQueue_c_DisplayClass12_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneLoadingQueue_c_DisplayClass12_0 {
        inline app::SceneLoadingQueue_c_DisplayClass12_0__Class** type_info() {
            static app::SceneLoadingQueue_c_DisplayClass12_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SceneLoadingQueue_c_DisplayClass12_0__Class**)(modloader::win::memory::resolve_rva(0x0472FE30));
            }
            return cache;
        }
        inline app::SceneLoadingQueue_c_DisplayClass12_0__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneLoadingQueue_c_DisplayClass12_0__Class>(type_info(), "", "SceneLoadingQueue", "<>c__DisplayClass12_0");
        }
        inline app::SceneLoadingQueue_c_DisplayClass12_0* create() {
            return il2cpp::create_object<app::SceneLoadingQueue_c_DisplayClass12_0>(get_class());
        }
    } // namespace SceneLoadingQueue_c_DisplayClass12_0
} // namespace app::classes::types
