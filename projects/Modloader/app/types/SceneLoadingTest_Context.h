#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SceneLoadingTest_Context__Class.h>
#include <Modloader/app/structs/SceneLoadingTest_Context.h>

namespace app::classes::types {
    namespace SceneLoadingTest_Context {
        inline app::SceneLoadingTest_Context__Class** type_info = (app::SceneLoadingTest_Context__Class**)(modloader::win::memory::resolve_rva(0x04738E68));
        inline app::SceneLoadingTest_Context__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneLoadingTest_Context__Class>(type_info, "Moon", "SceneLoadingTest", "Context");
        }
        inline app::SceneLoadingTest_Context* create() {
            return il2cpp::create_object<app::SceneLoadingTest_Context>(get_class());
        }
    } // namespace SceneLoadingTest_Context
} // namespace app::classes::types
