#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ICarryable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ICarryable__Class** type_info;
        inline app::ICarryable__Class* get_class() {
            return il2cpp::get_class<app::ICarryable__Class>(type_info, "", "ICarryable");
        }
        inline app::ICarryable__Array* create_array(int size) {
            return il2cpp::array_new<app::ICarryable__Array>(get_class(), size);
        }
    } // namespace ICarryable
} // namespace app::classes::types
