#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VerticalLayoutGroup {
        namespace {
            inline app::VerticalLayoutGroup__Class* type_info_ref = nullptr;
        }
        inline app::VerticalLayoutGroup__Class** type_info = &type_info_ref;
        inline app::VerticalLayoutGroup__Class* get_class() {
            return il2cpp::get_class<app::VerticalLayoutGroup__Class>(type_info, "UnityEngine.UI", "VerticalLayoutGroup");
        }
        inline app::VerticalLayoutGroup* create() {
            return il2cpp::create_object<app::VerticalLayoutGroup>(get_class());
        }
    } // namespace VerticalLayoutGroup
} // namespace app::classes::types
