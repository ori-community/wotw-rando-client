#pragma once
#include <Modloader/app/structs/SteeringForces_SteeringForcesBuilder.h>
#include <Modloader/app/structs/SteeringForces_SteeringForcesBuilder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SteeringForces_SteeringForcesBuilder {
        inline app::SteeringForces_SteeringForcesBuilder__Class** type_info() {
            static app::SteeringForces_SteeringForcesBuilder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SteeringForces_SteeringForcesBuilder__Class**)(modloader::win::memory::resolve_rva(0x04741378));
            }
            return cache;
        }
        inline app::SteeringForces_SteeringForcesBuilder__Class* get_class() {
            return il2cpp::get_nested_class<app::SteeringForces_SteeringForcesBuilder__Class>(type_info(), "", "SteeringForces", "SteeringForcesBuilder");
        }
        inline app::SteeringForces_SteeringForcesBuilder* create() {
            return il2cpp::create_object<app::SteeringForces_SteeringForcesBuilder>(get_class());
        }
    } // namespace SteeringForces_SteeringForcesBuilder
} // namespace app::classes::types
