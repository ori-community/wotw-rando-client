#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GridLayoutGroup {
        namespace {
            app::GridLayoutGroup__Class* type_info_ref = nullptr;
        }
        app::GridLayoutGroup__Class** type_info = &type_info_ref;
        inline app::GridLayoutGroup__Class* get_class() {
            return il2cpp::get_class<app::GridLayoutGroup__Class>(type_info, "UnityEngine.UI", "GridLayoutGroup");
        }
        inline app::GridLayoutGroup* create() {
            return il2cpp::create_object<app::GridLayoutGroup>(get_class());
        }
    } // namespace GridLayoutGroup
} // namespace app::classes::types
