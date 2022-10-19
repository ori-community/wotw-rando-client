#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IsUsingAzertyKeyboardCondition {
        namespace {
            inline app::IsUsingAzertyKeyboardCondition__Class* type_info_ref = nullptr;
        }
        inline app::IsUsingAzertyKeyboardCondition__Class** type_info = &type_info_ref;
        inline app::IsUsingAzertyKeyboardCondition__Class* get_class() {
            return il2cpp::get_class<app::IsUsingAzertyKeyboardCondition__Class>(type_info, "", "IsUsingAzertyKeyboardCondition");
        }
        inline app::IsUsingAzertyKeyboardCondition* create() {
            return il2cpp::create_object<app::IsUsingAzertyKeyboardCondition>(get_class());
        }
    } // namespace IsUsingAzertyKeyboardCondition
} // namespace app::classes::types
