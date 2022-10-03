#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RequestCachingSectionInternal {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RequestCachingSectionInternal__Class** type_info;
        inline app::RequestCachingSectionInternal__Class* get_class() {
            return il2cpp::get_class<app::RequestCachingSectionInternal__Class>(type_info, "System.Net.Cache", "RequestCachingSectionInternal");
        }
        inline app::RequestCachingSectionInternal* create() {
            return il2cpp::create_object<app::RequestCachingSectionInternal>(get_class());
        }
    } // namespace RequestCachingSectionInternal
} // namespace app::classes::types
