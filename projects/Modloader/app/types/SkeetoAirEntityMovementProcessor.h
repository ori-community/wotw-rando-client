#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SkeetoAirEntityMovementProcessor__Class.h>
#include <Modloader/app/structs/SkeetoAirEntityMovementProcessor.h>

namespace app::classes::types {
    namespace SkeetoAirEntityMovementProcessor {
        namespace {
            inline app::SkeetoAirEntityMovementProcessor__Class* type_info_ref = nullptr;
        }
        inline app::SkeetoAirEntityMovementProcessor__Class** type_info = &type_info_ref;
        inline app::SkeetoAirEntityMovementProcessor__Class* get_class() {
            return il2cpp::get_class<app::SkeetoAirEntityMovementProcessor__Class>(type_info, "", "SkeetoAirEntityMovementProcessor");
        }
        inline app::SkeetoAirEntityMovementProcessor* create() {
            return il2cpp::create_object<app::SkeetoAirEntityMovementProcessor>(get_class());
        }
    } // namespace SkeetoAirEntityMovementProcessor
} // namespace app::classes::types
