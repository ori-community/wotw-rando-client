#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InvalidFilterCriteriaException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InvalidFilterCriteriaException__Class** type_info;
        inline app::InvalidFilterCriteriaException__Class* get_class() {
            return il2cpp::get_class<app::InvalidFilterCriteriaException__Class>(type_info, "System.Reflection", "InvalidFilterCriteriaException");
        }
        inline app::InvalidFilterCriteriaException* create() {
            return il2cpp::create_object<app::InvalidFilterCriteriaException>(get_class());
        }
    } // namespace InvalidFilterCriteriaException
} // namespace app::classes::types
