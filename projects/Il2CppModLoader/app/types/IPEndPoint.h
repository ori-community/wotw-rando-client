#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IPEndPoint {
        inline app::IPEndPoint__Class** type_info = (app::IPEndPoint__Class**)(modloader::win::memory::resolve_rva(0x04779A68));
        inline app::IPEndPoint__Class* get_class() {
            return il2cpp::get_class<app::IPEndPoint__Class>(type_info, "System.Net", "IPEndPoint");
        }
        inline app::IPEndPoint* create() {
            return il2cpp::create_object<app::IPEndPoint>(get_class());
        }
        inline app::IPEndPoint__Array* create_array(int size) {
            return il2cpp::array_new<app::IPEndPoint__Array>(get_class(), size);
        }
        inline app::IPEndPoint__Array* create_array(const std::vector<app::IPEndPoint*>& items) {
            return il2cpp::array_new<app::IPEndPoint__Array>(get_class(), items);
        }
    } // namespace IPEndPoint
} // namespace app::classes::types
