#pragma once
#include <Modloader/app/structs/SceneLoadingTest.h>
#include <Modloader/app/structs/SceneLoadingTest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneLoadingTest {
        inline app::SceneLoadingTest__Class** type_info() {
            static app::SceneLoadingTest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SceneLoadingTest__Class**)(modloader::win::memory::resolve_rva(0x04789990));
            }
            return cache;
        }
        inline app::SceneLoadingTest__Class* get_class() {
            return il2cpp::get_class<app::SceneLoadingTest__Class>(type_info(), "Moon", "SceneLoadingTest");
        }
        inline app::SceneLoadingTest* create() {
            return il2cpp::create_object<app::SceneLoadingTest>(get_class());
        }
    } // namespace SceneLoadingTest
} // namespace app::classes::types
