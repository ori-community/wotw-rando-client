#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RequestCacheProtocol {
        inline app::RequestCacheProtocol__Class** type_info = (app::RequestCacheProtocol__Class**)(modloader::win::memory::resolve_rva(0x047345C8));
        inline app::RequestCacheProtocol__Class* get_class() {
            return il2cpp::get_class<app::RequestCacheProtocol__Class>(type_info, "System.Net.Cache", "RequestCacheProtocol");
        }
        inline app::RequestCacheProtocol* create() {
            return il2cpp::create_object<app::RequestCacheProtocol>(get_class());
        }
    } // namespace RequestCacheProtocol
} // namespace app::classes::types
