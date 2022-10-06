#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ForceLightTorchStopChasingZone {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ForceLightTorchStopChasingZone__Class** type_info;
        inline app::ForceLightTorchStopChasingZone__Class* get_class() {
            return il2cpp::get_class<app::ForceLightTorchStopChasingZone__Class>(type_info, "", "ForceLightTorchStopChasingZone");
        }
        inline app::ForceLightTorchStopChasingZone* create() {
            return il2cpp::create_object<app::ForceLightTorchStopChasingZone>(get_class());
        }
        inline app::ForceLightTorchStopChasingZone__Array* create_array(int size) {
            return il2cpp::array_new<app::ForceLightTorchStopChasingZone__Array>(get_class(), size);
        }
        inline app::ForceLightTorchStopChasingZone__Array* create_array(const std::vector<app::ForceLightTorchStopChasingZone*>& items) {
            return il2cpp::array_new<app::ForceLightTorchStopChasingZone__Array>(get_class(), items);
        }
    } // namespace ForceLightTorchStopChasingZone
} // namespace app::classes::types
