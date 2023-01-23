#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RaceStateMachineContext__Class.h>
#include <Modloader/app/structs/RaceStateMachineContext.h>

namespace app::classes::types {
    namespace RaceStateMachineContext {
        inline app::RaceStateMachineContext__Class** type_info = (app::RaceStateMachineContext__Class**)(modloader::win::memory::resolve_rva(0x0478ACE0));
        inline app::RaceStateMachineContext__Class* get_class() {
            return il2cpp::get_class<app::RaceStateMachineContext__Class>(type_info, "", "RaceStateMachineContext");
        }
        inline app::RaceStateMachineContext* create() {
            return il2cpp::create_object<app::RaceStateMachineContext>(get_class());
        }
    } // namespace RaceStateMachineContext
} // namespace app::classes::types
