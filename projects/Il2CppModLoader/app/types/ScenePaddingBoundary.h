#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScenePaddingBoundary {
        namespace {
            app::ScenePaddingBoundary__Class* type_info_ref = nullptr;
        }
        app::ScenePaddingBoundary__Class** type_info = &type_info_ref;
        inline app::ScenePaddingBoundary__Class* get_class() {
            return il2cpp::get_class<app::ScenePaddingBoundary__Class>(type_info, "", "ScenePaddingBoundary");
        }
        inline app::ScenePaddingBoundary* create() {
            return il2cpp::create_object<app::ScenePaddingBoundary>(get_class());
        }
    } // namespace ScenePaddingBoundary
} // namespace app::classes::types
