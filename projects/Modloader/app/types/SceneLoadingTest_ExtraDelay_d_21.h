#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneLoadingTest_ExtraDelay_d_21 {
        namespace {
            inline app::SceneLoadingTest_ExtraDelay_d_21__Class* type_info_ref = nullptr;
        }
        inline app::SceneLoadingTest_ExtraDelay_d_21__Class** type_info = &type_info_ref;
        inline app::SceneLoadingTest_ExtraDelay_d_21__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneLoadingTest_ExtraDelay_d_21__Class>(type_info, "Moon", "SceneLoadingTest", "<ExtraDelay>d__21");
        }
        inline app::SceneLoadingTest_ExtraDelay_d_21* create() {
            return il2cpp::create_object<app::SceneLoadingTest_ExtraDelay_d_21>(get_class());
        }
        inline app::SceneLoadingTest_ExtraDelay_d_21__Boxed* box(app::SceneLoadingTest_ExtraDelay_d_21 value) {
            return il2cpp::box_value<app::SceneLoadingTest_ExtraDelay_d_21__Boxed>(get_class(), value);
        }
    } // namespace SceneLoadingTest_ExtraDelay_d_21
} // namespace app::classes::types
