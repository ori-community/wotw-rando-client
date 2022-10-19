#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RequestCachingSectionInternal {
        inline app::RequestCachingSectionInternal__Class** type_info = (app::RequestCachingSectionInternal__Class**)(modloader::win::memory::resolve_rva(0x0472D348));
        inline app::RequestCachingSectionInternal__Class* get_class() {
            return il2cpp::get_class<app::RequestCachingSectionInternal__Class>(type_info, "System.Net.Cache", "RequestCachingSectionInternal");
        }
        inline app::RequestCachingSectionInternal* create() {
            return il2cpp::create_object<app::RequestCachingSectionInternal>(get_class());
        }
    } // namespace RequestCachingSectionInternal
} // namespace app::classes::types
