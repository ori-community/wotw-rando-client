#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPEndPoint {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IPEndPoint__Class** type_info;
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
