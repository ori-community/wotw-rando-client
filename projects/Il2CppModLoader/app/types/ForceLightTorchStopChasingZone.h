#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ForceLightTorchStopChasingZone {
        inline app::ForceLightTorchStopChasingZone__Class** type_info = (app::ForceLightTorchStopChasingZone__Class**)(modloader::win::memory::resolve_rva(0x04751D98));
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
