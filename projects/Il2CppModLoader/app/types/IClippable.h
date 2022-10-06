#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IClippable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IClippable__Class** type_info;
        inline app::IClippable__Class* get_class() {
            return il2cpp::get_class<app::IClippable__Class>(type_info, "UnityEngine.UI", "IClippable");
        }
        inline app::IClippable__Array* create_array(int size) {
            return il2cpp::array_new<app::IClippable__Array>(get_class(), size);
        }
        inline app::IClippable__Array* create_array(const std::vector<app::IClippable*>& items) {
            return il2cpp::array_new<app::IClippable__Array>(get_class(), items);
        }
    } // namespace IClippable
} // namespace app::classes::types
