#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SteeringForces_SteeringForcesBuilder {
        inline app::SteeringForces_SteeringForcesBuilder__Class** type_info = (app::SteeringForces_SteeringForcesBuilder__Class**)(modloader::win::memory::resolve_rva(0x04741378));
        inline app::SteeringForces_SteeringForcesBuilder__Class* get_class() {
            return il2cpp::get_nested_class<app::SteeringForces_SteeringForcesBuilder__Class>(type_info, "", "SteeringForces", "SteeringForcesBuilder");
        }
        inline app::SteeringForces_SteeringForcesBuilder* create() {
            return il2cpp::create_object<app::SteeringForces_SteeringForcesBuilder>(get_class());
        }
    } // namespace SteeringForces_SteeringForcesBuilder
} // namespace app::classes::types
