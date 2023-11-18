#pragma once
#include <Modloader/app/structs/RaceStateMachineContext_MessagesConfiguration.h>
#include <Modloader/app/structs/RaceStateMachineContext_MessagesConfiguration__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceStateMachineContext_MessagesConfiguration {
        inline app::RaceStateMachineContext_MessagesConfiguration__Class** type_info() {
            static app::RaceStateMachineContext_MessagesConfiguration__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RaceStateMachineContext_MessagesConfiguration__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RaceStateMachineContext_MessagesConfiguration__Class* get_class() {
            return il2cpp::get_nested_class<app::RaceStateMachineContext_MessagesConfiguration__Class>(type_info(), "", "RaceStateMachineContext", "MessagesConfiguration");
        }
        inline app::RaceStateMachineContext_MessagesConfiguration* create() {
            return il2cpp::create_object<app::RaceStateMachineContext_MessagesConfiguration>(get_class());
        }
    } // namespace RaceStateMachineContext_MessagesConfiguration
} // namespace app::classes::types
