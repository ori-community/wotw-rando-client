#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerObjectComponent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ServerObjectComponent__Class** type_info;
        inline app::ServerObjectComponent__Class* get_class() {
            return il2cpp::get_class<app::ServerObjectComponent__Class>(type_info, "", "ServerObjectComponent");
        }
        inline app::ServerObjectComponent* create() {
            return il2cpp::create_object<app::ServerObjectComponent>(get_class());
        }
        inline app::ServerObjectComponent__Array* create_array(int size) {
            return il2cpp::array_new<app::ServerObjectComponent__Array>(get_class(), size);
        }
    } // namespace ServerObjectComponent
} // namespace app::classes::types
