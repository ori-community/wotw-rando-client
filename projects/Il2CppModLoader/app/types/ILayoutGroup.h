#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ILayoutGroup {
        namespace {
            app::ILayoutGroup__Class* type_info_ref = nullptr;
        }
        app::ILayoutGroup__Class** type_info = &type_info_ref;
        inline app::ILayoutGroup__Class* get_class() {
            return il2cpp::get_class<app::ILayoutGroup__Class>(type_info, "UnityEngine.UI", "ILayoutGroup");
        }
        inline app::ILayoutGroup* create() {
            return il2cpp::create_object<app::ILayoutGroup>(get_class());
        }
    } // namespace ILayoutGroup
} // namespace app::classes::types
