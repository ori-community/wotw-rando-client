#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IExplicitUpdateHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IExplicitUpdateHandler__Class** type_info;
        inline app::IExplicitUpdateHandler__Class* get_class() {
            return il2cpp::get_class<app::IExplicitUpdateHandler__Class>(type_info, "Moon", "IExplicitUpdateHandler");
        }
        inline app::IExplicitUpdateHandler__Array* create_array(int size) {
            return il2cpp::array_new<app::IExplicitUpdateHandler__Array>(get_class(), size);
        }
    } // namespace IExplicitUpdateHandler
} // namespace app::classes::types
