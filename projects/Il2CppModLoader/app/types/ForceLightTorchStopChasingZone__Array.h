#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ForceLightTorchStopChasingZone__Array {
        namespace {
            inline app::ForceLightTorchStopChasingZone__Array__Class* type_info_ref = nullptr;
        }
        inline app::ForceLightTorchStopChasingZone__Array__Class** type_info = &type_info_ref;
        inline app::ForceLightTorchStopChasingZone__Array__Class* get_class() {
            return il2cpp::get_class<app::ForceLightTorchStopChasingZone__Array__Class>(type_info, "", "ForceLightTorchStopChasingZone[]");
        }
        inline app::ForceLightTorchStopChasingZone__Array* create() {
            return il2cpp::create_object<app::ForceLightTorchStopChasingZone__Array>(get_class());
        }
    } // namespace ForceLightTorchStopChasingZone__Array
} // namespace app::classes::types
