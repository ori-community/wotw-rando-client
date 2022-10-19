#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IPEndPoint__Array {
        inline app::IPEndPoint__Array__Class** type_info = (app::IPEndPoint__Array__Class**)(modloader::win::memory::resolve_rva(0x04791638));
        inline app::IPEndPoint__Array__Class* get_class() {
            return il2cpp::get_class<app::IPEndPoint__Array__Class>(type_info, "System.Net", "IPEndPoint[]");
        }
        inline app::IPEndPoint__Array* create() {
            return il2cpp::create_object<app::IPEndPoint__Array>(get_class());
        }
    } // namespace IPEndPoint__Array
} // namespace app::classes::types
