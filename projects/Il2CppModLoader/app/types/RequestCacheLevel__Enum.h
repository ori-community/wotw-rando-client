#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RequestCacheLevel__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RequestCacheLevel__Enum__Class** type_info;
        inline app::RequestCacheLevel__Enum__Class* get_class() {
            return il2cpp::get_class<app::RequestCacheLevel__Enum__Class>(type_info, "System.Net.Cache", "RequestCacheLevel");
        }
        inline app::RequestCacheLevel__Enum* create() {
            return il2cpp::create_object<app::RequestCacheLevel__Enum>(get_class());
        }
    } // namespace RequestCacheLevel__Enum
} // namespace app::classes::types
