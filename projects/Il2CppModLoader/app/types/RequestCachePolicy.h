#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RequestCachePolicy {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RequestCachePolicy__Class** type_info;
        inline app::RequestCachePolicy__Class* get_class() {
            return il2cpp::get_class<app::RequestCachePolicy__Class>(type_info, "System.Net.Cache", "RequestCachePolicy");
        }
        inline app::RequestCachePolicy* create() {
            return il2cpp::create_object<app::RequestCachePolicy>(get_class());
        }
    } // namespace RequestCachePolicy
} // namespace app::classes::types
