#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BigIntegerCalculator {
        inline app::BigIntegerCalculator__Class** type_info = (app::BigIntegerCalculator__Class**)(modloader::win::memory::resolve_rva(0x04755270));
        inline app::BigIntegerCalculator__Class* get_class() {
            return il2cpp::get_class<app::BigIntegerCalculator__Class>(type_info, "System.Numerics", "BigIntegerCalculator");
        }
        inline app::BigIntegerCalculator* create() {
            return il2cpp::create_object<app::BigIntegerCalculator>(get_class());
        }
    } // namespace BigIntegerCalculator
} // namespace app::classes::types
