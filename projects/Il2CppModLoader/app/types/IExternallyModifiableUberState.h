#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IExternallyModifiableUberState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IExternallyModifiableUberState__Class** type_info;
        inline app::IExternallyModifiableUberState__Class* get_class() {
            return il2cpp::get_class<app::IExternallyModifiableUberState__Class>(type_info, "Moon", "IExternallyModifiableUberState");
        }
        inline app::IExternallyModifiableUberState__Array* create_array(int size) {
            return il2cpp::array_new<app::IExternallyModifiableUberState__Array>(get_class(), size);
        }
    } // namespace IExternallyModifiableUberState
} // namespace app::classes::types
