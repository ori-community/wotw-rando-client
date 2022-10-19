#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LayoutGroup {
        namespace {
            inline app::LayoutGroup__Class* type_info_ref = nullptr;
        }
        inline app::LayoutGroup__Class** type_info = &type_info_ref;
        inline app::LayoutGroup__Class* get_class() {
            return il2cpp::get_class<app::LayoutGroup__Class>(type_info, "UnityEngine.UI", "LayoutGroup");
        }
        inline app::LayoutGroup* create() {
            return il2cpp::create_object<app::LayoutGroup>(get_class());
        }
    } // namespace LayoutGroup
} // namespace app::classes::types
