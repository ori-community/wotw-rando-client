#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISwitch {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISwitch__Class** type_info;
        inline app::ISwitch__Class* get_class() {
            return il2cpp::get_class<app::ISwitch__Class>(type_info, "", "ISwitch");
        }
        inline app::ISwitch__Array* create_array(int size) {
            return il2cpp::array_new<app::ISwitch__Array>(get_class(), size);
        }
        inline app::ISwitch__Array* create_array(const std::vector<app::ISwitch*>& items) {
            return il2cpp::array_new<app::ISwitch__Array>(get_class(), items);
        }
    } // namespace ISwitch
} // namespace app::classes::types
