#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AirEntityMovementProcessor {
        namespace {
            app::AirEntityMovementProcessor__Class* type_info_ref = nullptr;
        }
        app::AirEntityMovementProcessor__Class** type_info = &type_info_ref;
        inline app::AirEntityMovementProcessor__Class* get_class() {
            return il2cpp::get_class<app::AirEntityMovementProcessor__Class>(type_info, "Moon", "AirEntityMovementProcessor");
        }
        inline app::AirEntityMovementProcessor* create() {
            return il2cpp::create_object<app::AirEntityMovementProcessor>(get_class());
        }
    } // namespace AirEntityMovementProcessor
} // namespace app::classes::types
