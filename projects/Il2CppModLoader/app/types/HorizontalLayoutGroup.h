#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HorizontalLayoutGroup {
        namespace {
            inline app::HorizontalLayoutGroup__Class* type_info_ref = nullptr;
        }
        inline app::HorizontalLayoutGroup__Class** type_info = &type_info_ref;
        inline app::HorizontalLayoutGroup__Class* get_class() {
            return il2cpp::get_class<app::HorizontalLayoutGroup__Class>(type_info, "UnityEngine.UI", "HorizontalLayoutGroup");
        }
        inline app::HorizontalLayoutGroup* create() {
            return il2cpp::create_object<app::HorizontalLayoutGroup>(get_class());
        }
    } // namespace HorizontalLayoutGroup
} // namespace app::classes::types
