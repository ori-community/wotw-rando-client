#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDesiredUberState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDesiredUberState__Class** type_info;
        inline app::IDesiredUberState__Class* get_class() {
            return il2cpp::get_class<app::IDesiredUberState__Class>(type_info, "", "IDesiredUberState");
        }
        inline app::IDesiredUberState__Array* create_array(int size) {
            return il2cpp::array_new<app::IDesiredUberState__Array>(get_class(), size);
        }
    } // namespace IDesiredUberState
} // namespace app::classes::types
