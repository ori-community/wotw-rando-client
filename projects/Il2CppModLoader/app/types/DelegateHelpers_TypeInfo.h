#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DelegateHelpers_TypeInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DelegateHelpers_TypeInfo__Class** type_info;
        inline app::DelegateHelpers_TypeInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::DelegateHelpers_TypeInfo__Class>(type_info, "System.Linq.Expressions.Compiler", "DelegateHelpers", "TypeInfo");
        }
        inline app::DelegateHelpers_TypeInfo* create() {
            return il2cpp::create_object<app::DelegateHelpers_TypeInfo>(get_class());
        }
        inline app::DelegateHelpers_TypeInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::DelegateHelpers_TypeInfo__Array>(get_class(), size);
        }
        inline app::DelegateHelpers_TypeInfo__Array* create_array(const std::vector<app::DelegateHelpers_TypeInfo*>& items) {
            return il2cpp::array_new<app::DelegateHelpers_TypeInfo__Array>(get_class(), items);
        }
    } // namespace DelegateHelpers_TypeInfo
} // namespace app::classes::types
