#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaceStateMachineContext_MessagesConfiguration {
        namespace {
            inline app::RaceStateMachineContext_MessagesConfiguration__Class* type_info_ref = nullptr;
        }
        inline app::RaceStateMachineContext_MessagesConfiguration__Class** type_info = &type_info_ref;
        inline app::RaceStateMachineContext_MessagesConfiguration__Class* get_class() {
            return il2cpp::get_nested_class<app::RaceStateMachineContext_MessagesConfiguration__Class>(type_info, "", "RaceStateMachineContext", "MessagesConfiguration");
        }
        inline app::RaceStateMachineContext_MessagesConfiguration* create() {
            return il2cpp::create_object<app::RaceStateMachineContext_MessagesConfiguration>(get_class());
        }
    } // namespace RaceStateMachineContext_MessagesConfiguration
} // namespace app::classes::types
