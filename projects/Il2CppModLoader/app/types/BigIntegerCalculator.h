#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BigIntegerCalculator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BigIntegerCalculator__Class** type_info;
        inline app::BigIntegerCalculator__Class* get_class() {
            return il2cpp::get_class<app::BigIntegerCalculator__Class>(type_info, "System.Numerics", "BigIntegerCalculator");
        }
        inline app::BigIntegerCalculator* create() {
            return il2cpp::create_object<app::BigIntegerCalculator>(get_class());
        }
    } // namespace BigIntegerCalculator
} // namespace app::classes::types
