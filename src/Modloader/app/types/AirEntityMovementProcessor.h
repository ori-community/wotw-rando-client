#pragma once
#include <Modloader/app/structs/AirEntityMovementProcessor.h>
#include <Modloader/app/structs/AirEntityMovementProcessor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AirEntityMovementProcessor {
        inline app::AirEntityMovementProcessor__Class** type_info() {
            static app::AirEntityMovementProcessor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AirEntityMovementProcessor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AirEntityMovementProcessor__Class* get_class() {
            return il2cpp::get_class<app::AirEntityMovementProcessor__Class>(type_info(), "Moon", "AirEntityMovementProcessor");
        }
        inline app::AirEntityMovementProcessor* create() {
            return il2cpp::create_object<app::AirEntityMovementProcessor>(get_class());
        }
    } // namespace AirEntityMovementProcessor
} // namespace app::classes::types
