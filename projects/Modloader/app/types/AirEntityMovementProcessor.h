#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AirEntityMovementProcessor {
        namespace {
            inline app::AirEntityMovementProcessor__Class* type_info_ref = nullptr;
        }
        inline app::AirEntityMovementProcessor__Class** type_info = &type_info_ref;
        inline app::AirEntityMovementProcessor__Class* get_class() {
            return il2cpp::get_class<app::AirEntityMovementProcessor__Class>(type_info, "Moon", "AirEntityMovementProcessor");
        }
        inline app::AirEntityMovementProcessor* create() {
            return il2cpp::create_object<app::AirEntityMovementProcessor>(get_class());
        }
    } // namespace AirEntityMovementProcessor
} // namespace app::classes::types
