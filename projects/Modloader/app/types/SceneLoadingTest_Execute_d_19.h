#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SceneLoadingTest_Execute_d_19__Class.h>
#include <Modloader/app/structs/SceneLoadingTest_Execute_d_19.h>
#include <Modloader/app/structs/SceneLoadingTest_Execute_d_19__Boxed.h>

namespace app::classes::types {
    namespace SceneLoadingTest_Execute_d_19 {
        namespace {
            inline app::SceneLoadingTest_Execute_d_19__Class* type_info_ref = nullptr;
        }
        inline app::SceneLoadingTest_Execute_d_19__Class** type_info = &type_info_ref;
        inline app::SceneLoadingTest_Execute_d_19__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneLoadingTest_Execute_d_19__Class>(type_info, "Moon", "SceneLoadingTest", "<Execute>d__19");
        }
        inline app::SceneLoadingTest_Execute_d_19* create() {
            return il2cpp::create_object<app::SceneLoadingTest_Execute_d_19>(get_class());
        }
        inline app::SceneLoadingTest_Execute_d_19__Boxed* box(app::SceneLoadingTest_Execute_d_19 value) {
            return il2cpp::box_value<app::SceneLoadingTest_Execute_d_19__Boxed>(get_class(), value);
        }
    } // namespace SceneLoadingTest_Execute_d_19
} // namespace app::classes::types
