#pragma once
#include <Modloader/app/structs/SkeetoAirEntityMovementProcessor.h>
#include <Modloader/app/structs/SkeetoAirEntityMovementProcessor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkeetoAirEntityMovementProcessor {
        inline app::SkeetoAirEntityMovementProcessor__Class** type_info() {
            static app::SkeetoAirEntityMovementProcessor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkeetoAirEntityMovementProcessor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkeetoAirEntityMovementProcessor__Class* get_class() {
            return il2cpp::get_class<app::SkeetoAirEntityMovementProcessor__Class>(type_info(), "", "SkeetoAirEntityMovementProcessor");
        }
        inline app::SkeetoAirEntityMovementProcessor* create() {
            return il2cpp::create_object<app::SkeetoAirEntityMovementProcessor>(get_class());
        }
    } // namespace SkeetoAirEntityMovementProcessor
} // namespace app::classes::types
