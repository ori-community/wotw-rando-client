#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GlobalPlaceholderCountData_Tally__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GlobalPlaceholderCountData_Tally__Array__Class** type_info;
        inline app::GlobalPlaceholderCountData_Tally__Array__Class* get_class() {
            return il2cpp::get_class<app::GlobalPlaceholderCountData_Tally__Array__Class>(type_info, "", "GlobalPlaceholderCountData+Tally[]");
        }
        inline app::GlobalPlaceholderCountData_Tally__Array* create() {
            return il2cpp::create_object<app::GlobalPlaceholderCountData_Tally__Array>(get_class());
        }
    } // namespace GlobalPlaceholderCountData_Tally__Array
} // namespace app::classes::types
