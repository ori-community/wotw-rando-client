#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderComponent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberShaderComponent__Class** type_info;
        inline app::UberShaderComponent__Class* get_class() {
            return il2cpp::get_class<app::UberShaderComponent__Class>(type_info, "", "UberShaderComponent");
        }
        inline app::UberShaderComponent* create() {
            return il2cpp::create_object<app::UberShaderComponent>(get_class());
        }
        inline app::UberShaderComponent__Array* create_array(int size) {
            return il2cpp::array_new<app::UberShaderComponent__Array>(get_class(), size);
        }
    } // namespace UberShaderComponent
} // namespace app::classes::types
