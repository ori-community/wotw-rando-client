#pragma once
#include <Modloader/app/structs/SceneLoadingTester.h>
#include <Modloader/app/structs/SceneLoadingTester__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneLoadingTester {
        inline app::SceneLoadingTester__Class** type_info() {
            static app::SceneLoadingTester__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneLoadingTester__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneLoadingTester__Class* get_class() {
            return il2cpp::get_class<app::SceneLoadingTester__Class>(type_info(), "", "SceneLoadingTester");
        }
        inline app::SceneLoadingTester* create() {
            return il2cpp::create_object<app::SceneLoadingTester>(get_class());
        }
    } // namespace SceneLoadingTester
} // namespace app::classes::types
