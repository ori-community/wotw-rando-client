#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DelegateHelpers_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DelegateHelpers_1__Class** type_info;
        inline app::DelegateHelpers_1__Class* get_class() {
            return il2cpp::get_class<app::DelegateHelpers_1__Class>(type_info, "System.Linq.Expressions.Compiler", "DelegateHelpers");
        }
        inline app::DelegateHelpers_1* create() {
            return il2cpp::create_object<app::DelegateHelpers_1>(get_class());
        }
    } // namespace DelegateHelpers_1
} // namespace app::classes::types
