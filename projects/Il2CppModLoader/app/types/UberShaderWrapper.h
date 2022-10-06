#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderWrapper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberShaderWrapper__Class** type_info;
        inline app::UberShaderWrapper__Class* get_class() {
            return il2cpp::get_class<app::UberShaderWrapper__Class>(type_info, "Moon.ArtOptimization", "UberShaderWrapper");
        }
        inline app::UberShaderWrapper* create() {
            return il2cpp::create_object<app::UberShaderWrapper>(get_class());
        }
        inline app::UberShaderWrapper__Array* create_array(int size) {
            return il2cpp::array_new<app::UberShaderWrapper__Array>(get_class(), size);
        }
        inline app::UberShaderWrapper__Array* create_array(const std::vector<app::UberShaderWrapper*>& items) {
            return il2cpp::array_new<app::UberShaderWrapper__Array>(get_class(), items);
        }
    } // namespace UberShaderWrapper
} // namespace app::classes::types
