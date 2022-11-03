#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneLoadingTest_RunState__Enum {
        namespace {
            inline app::SceneLoadingTest_RunState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SceneLoadingTest_RunState__Enum__Class** type_info = &type_info_ref;
        inline app::SceneLoadingTest_RunState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneLoadingTest_RunState__Enum__Class>(type_info, "Moon", "SceneLoadingTest", "RunState");
        }
        inline app::SceneLoadingTest_RunState__Enum* create() {
            return il2cpp::create_object<app::SceneLoadingTest_RunState__Enum>(get_class());
        }
    } // namespace SceneLoadingTest_RunState__Enum
} // namespace app::classes::types
