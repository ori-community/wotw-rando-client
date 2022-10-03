#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkeetoAirEntityMovementProcessor {
        namespace {
            app::SkeetoAirEntityMovementProcessor__Class* type_info_ref = nullptr;
        }
        app::SkeetoAirEntityMovementProcessor__Class** type_info = &type_info_ref;
        inline app::SkeetoAirEntityMovementProcessor__Class* get_class() {
            return il2cpp::get_class<app::SkeetoAirEntityMovementProcessor__Class>(type_info, "", "SkeetoAirEntityMovementProcessor");
        }
        inline app::SkeetoAirEntityMovementProcessor* create() {
            return il2cpp::create_object<app::SkeetoAirEntityMovementProcessor>(get_class());
        }
    } // namespace SkeetoAirEntityMovementProcessor
} // namespace app::classes::types
