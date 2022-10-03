#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HorizontalOrVerticalLayoutGroup {
        namespace {
            app::HorizontalOrVerticalLayoutGroup__Class* type_info_ref = nullptr;
        }
        app::HorizontalOrVerticalLayoutGroup__Class** type_info = &type_info_ref;
        inline app::HorizontalOrVerticalLayoutGroup__Class* get_class() {
            return il2cpp::get_class<app::HorizontalOrVerticalLayoutGroup__Class>(type_info, "UnityEngine.UI", "HorizontalOrVerticalLayoutGroup");
        }
        inline app::HorizontalOrVerticalLayoutGroup* create() {
            return il2cpp::create_object<app::HorizontalOrVerticalLayoutGroup>(get_class());
        }
    } // namespace HorizontalOrVerticalLayoutGroup
} // namespace app::classes::types
