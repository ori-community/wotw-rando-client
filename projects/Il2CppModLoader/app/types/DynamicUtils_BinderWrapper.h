#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DynamicUtils_BinderWrapper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DynamicUtils_BinderWrapper__Class** type_info;
        inline app::DynamicUtils_BinderWrapper__Class* get_class() {
            return il2cpp::get_nested_class<app::DynamicUtils_BinderWrapper__Class>(type_info, "Newtonsoft.Json.Utilities", "DynamicUtils", "BinderWrapper");
        }
        inline app::DynamicUtils_BinderWrapper* create() {
            return il2cpp::create_object<app::DynamicUtils_BinderWrapper>(get_class());
        }
    } // namespace DynamicUtils_BinderWrapper
} // namespace app::classes::types
