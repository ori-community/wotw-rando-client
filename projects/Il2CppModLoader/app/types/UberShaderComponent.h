#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderComponent {
        inline app::UberShaderComponent__Class** type_info = (app::UberShaderComponent__Class**)(modloader::win::memory::resolve_rva(0x0470BC10));
        inline app::UberShaderComponent__Class* get_class() {
            return il2cpp::get_class<app::UberShaderComponent__Class>(type_info, "", "UberShaderComponent");
        }
        inline app::UberShaderComponent* create() {
            return il2cpp::create_object<app::UberShaderComponent>(get_class());
        }
        inline app::UberShaderComponent__Array* create_array(int size) {
            return il2cpp::array_new<app::UberShaderComponent__Array>(get_class(), size);
        }
        inline app::UberShaderComponent__Array* create_array(const std::vector<app::UberShaderComponent*>& items) {
            return il2cpp::array_new<app::UberShaderComponent__Array>(get_class(), items);
        }
    } // namespace UberShaderComponent
} // namespace app::classes::types
