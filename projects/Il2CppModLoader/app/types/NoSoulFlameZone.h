#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NoSoulFlameZone {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NoSoulFlameZone__Class** type_info;
        inline app::NoSoulFlameZone__Class* get_class() {
            return il2cpp::get_class<app::NoSoulFlameZone__Class>(type_info, "", "NoSoulFlameZone");
        }
        inline app::NoSoulFlameZone* create() {
            return il2cpp::create_object<app::NoSoulFlameZone>(get_class());
        }
        inline app::NoSoulFlameZone__Array* create_array(int size) {
            return il2cpp::array_new<app::NoSoulFlameZone__Array>(get_class(), size);
        }
        inline app::NoSoulFlameZone__Array* create_array(const std::vector<app::NoSoulFlameZone*>& items) {
            return il2cpp::array_new<app::NoSoulFlameZone__Array>(get_class(), items);
        }
    } // namespace NoSoulFlameZone
} // namespace app::classes::types
