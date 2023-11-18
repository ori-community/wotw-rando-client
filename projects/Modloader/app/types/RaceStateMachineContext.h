#pragma once
#include <Modloader/app/structs/RaceStateMachineContext.h>
#include <Modloader/app/structs/RaceStateMachineContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceStateMachineContext {
        inline app::RaceStateMachineContext__Class** type_info() {
            static app::RaceStateMachineContext__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RaceStateMachineContext__Class**)(modloader::win::memory::resolve_rva(0x0478ACE0));
            }
            return cache;
        }
        inline app::RaceStateMachineContext__Class* get_class() {
            return il2cpp::get_class<app::RaceStateMachineContext__Class>(type_info(), "", "RaceStateMachineContext");
        }
        inline app::RaceStateMachineContext* create() {
            return il2cpp::create_object<app::RaceStateMachineContext>(get_class());
        }
    } // namespace RaceStateMachineContext
} // namespace app::classes::types
