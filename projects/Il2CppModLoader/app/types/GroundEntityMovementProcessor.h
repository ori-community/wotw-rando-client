#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GroundEntityMovementProcessor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GroundEntityMovementProcessor__Class** type_info;
        inline app::GroundEntityMovementProcessor__Class* get_class() {
            return il2cpp::get_class<app::GroundEntityMovementProcessor__Class>(type_info, "", "GroundEntityMovementProcessor");
        }
        inline app::GroundEntityMovementProcessor* create() {
            return il2cpp::create_object<app::GroundEntityMovementProcessor>(get_class());
        }
    } // namespace GroundEntityMovementProcessor
} // namespace app::classes::types
