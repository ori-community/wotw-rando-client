#pragma once
#include <Modloader/app/structs/RaceStateMachineContext_SequencesConfiguration.h>
#include <Modloader/app/structs/RaceStateMachineContext_SequencesConfiguration__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceStateMachineContext_SequencesConfiguration {
        inline app::RaceStateMachineContext_SequencesConfiguration__Class** type_info() {
            static app::RaceStateMachineContext_SequencesConfiguration__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RaceStateMachineContext_SequencesConfiguration__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RaceStateMachineContext_SequencesConfiguration__Class* get_class() {
            return il2cpp::get_nested_class<app::RaceStateMachineContext_SequencesConfiguration__Class>(type_info(), "", "RaceStateMachineContext", "SequencesConfiguration");
        }
        inline app::RaceStateMachineContext_SequencesConfiguration* create() {
            return il2cpp::create_object<app::RaceStateMachineContext_SequencesConfiguration>(get_class());
        }
    } // namespace RaceStateMachineContext_SequencesConfiguration
} // namespace app::classes::types
