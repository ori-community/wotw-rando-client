#pragma once
#include <Modloader/app/structs/RaceStateMachineContext_TimelinesConfiguration.h>
#include <Modloader/app/structs/RaceStateMachineContext_TimelinesConfiguration__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceStateMachineContext_TimelinesConfiguration {
        inline app::RaceStateMachineContext_TimelinesConfiguration__Class** type_info() {
            static app::RaceStateMachineContext_TimelinesConfiguration__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RaceStateMachineContext_TimelinesConfiguration__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RaceStateMachineContext_TimelinesConfiguration__Class* get_class() {
            return il2cpp::get_nested_class<app::RaceStateMachineContext_TimelinesConfiguration__Class>(type_info(), "", "RaceStateMachineContext", "TimelinesConfiguration");
        }
        inline app::RaceStateMachineContext_TimelinesConfiguration* create() {
            return il2cpp::create_object<app::RaceStateMachineContext_TimelinesConfiguration>(get_class());
        }
    } // namespace RaceStateMachineContext_TimelinesConfiguration
} // namespace app::classes::types
