#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonMath_VerletDynamicsValue {
        inline app::MoonMath_VerletDynamicsValue__Class** type_info = (app::MoonMath_VerletDynamicsValue__Class**)(modloader::win::memory::resolve_rva(0x04741C78));
        inline app::MoonMath_VerletDynamicsValue__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonMath_VerletDynamicsValue__Class>(type_info, "", "MoonMath", "VerletDynamicsValue");
        }
        inline app::MoonMath_VerletDynamicsValue* create() {
            return il2cpp::create_object<app::MoonMath_VerletDynamicsValue>(get_class());
        }
    } // namespace MoonMath_VerletDynamicsValue
} // namespace app::classes::types
