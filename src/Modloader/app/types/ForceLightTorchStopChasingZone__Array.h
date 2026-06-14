#pragma once
#include <Modloader/app/structs/ForceLightTorchStopChasingZone__Array.h>
#include <Modloader/app/structs/ForceLightTorchStopChasingZone__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ForceLightTorchStopChasingZone__Array {
        inline app::ForceLightTorchStopChasingZone__Array__Class** type_info() {
            static app::ForceLightTorchStopChasingZone__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ForceLightTorchStopChasingZone__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ForceLightTorchStopChasingZone__Array__Class* get_class() {
            return il2cpp::get_class<app::ForceLightTorchStopChasingZone__Array__Class>(type_info(), "", "ForceLightTorchStopChasingZone[]");
        }
        inline app::ForceLightTorchStopChasingZone__Array* create() {
            return il2cpp::create_object<app::ForceLightTorchStopChasingZone__Array>(get_class());
        }
    } // namespace ForceLightTorchStopChasingZone__Array
} // namespace app::classes::types
