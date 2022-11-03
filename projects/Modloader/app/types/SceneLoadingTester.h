#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneLoadingTester {
        namespace {
            inline app::SceneLoadingTester__Class* type_info_ref = nullptr;
        }
        inline app::SceneLoadingTester__Class** type_info = &type_info_ref;
        inline app::SceneLoadingTester__Class* get_class() {
            return il2cpp::get_class<app::SceneLoadingTester__Class>(type_info, "", "SceneLoadingTester");
        }
        inline app::SceneLoadingTester* create() {
            return il2cpp::create_object<app::SceneLoadingTester>(get_class());
        }
    } // namespace SceneLoadingTester
} // namespace app::classes::types
