#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MarshalByValueComponent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MarshalByValueComponent__Class** type_info;
        inline app::MarshalByValueComponent__Class* get_class() {
            return il2cpp::get_class<app::MarshalByValueComponent__Class>(type_info, "System.ComponentModel", "MarshalByValueComponent");
        }
        inline app::MarshalByValueComponent* create() {
            return il2cpp::create_object<app::MarshalByValueComponent>(get_class());
        }
    } // namespace MarshalByValueComponent
} // namespace app::classes::types
