#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IGenericUberState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IGenericUberState__Class** type_info;
        inline app::IGenericUberState__Class* get_class() {
            return il2cpp::get_class<app::IGenericUberState__Class>(type_info, "Moon", "IGenericUberState");
        }
        inline app::IGenericUberState__Array* create_array(int size) {
            return il2cpp::array_new<app::IGenericUberState__Array>(get_class(), size);
        }
    } // namespace IGenericUberState
} // namespace app::classes::types
