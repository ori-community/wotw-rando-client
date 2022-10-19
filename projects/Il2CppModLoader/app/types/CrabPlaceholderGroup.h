#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CrabPlaceholderGroup {
        namespace {
            inline app::CrabPlaceholderGroup__Class* type_info_ref = nullptr;
        }
        inline app::CrabPlaceholderGroup__Class** type_info = &type_info_ref;
        inline app::CrabPlaceholderGroup__Class* get_class() {
            return il2cpp::get_class<app::CrabPlaceholderGroup__Class>(type_info, "", "CrabPlaceholderGroup");
        }
        inline app::CrabPlaceholderGroup* create() {
            return il2cpp::create_object<app::CrabPlaceholderGroup>(get_class());
        }
    } // namespace CrabPlaceholderGroup
} // namespace app::classes::types
