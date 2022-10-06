#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightSource {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LightSource__Class** type_info;
        inline app::LightSource__Class* get_class() {
            return il2cpp::get_class<app::LightSource__Class>(type_info, "", "LightSource");
        }
        inline app::LightSource* create() {
            return il2cpp::create_object<app::LightSource>(get_class());
        }
        inline app::LightSource__Array* create_array(int size) {
            return il2cpp::array_new<app::LightSource__Array>(get_class(), size);
        }
        inline app::LightSource__Array* create_array(const std::vector<app::LightSource*>& items) {
            return il2cpp::array_new<app::LightSource__Array>(get_class(), items);
        }
    } // namespace LightSource
} // namespace app::classes::types
