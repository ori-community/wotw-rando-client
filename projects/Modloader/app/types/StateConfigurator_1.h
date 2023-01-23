#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/StateConfigurator_1__Class.h>
#include <Modloader/app/structs/StateConfigurator_1.h>

namespace app::classes::types {
    namespace StateConfigurator_1 {
        inline app::StateConfigurator_1__Class** type_info = (app::StateConfigurator_1__Class**)(modloader::win::memory::resolve_rva(0x0470A0E0));
        inline app::StateConfigurator_1__Class* get_class() {
            return il2cpp::get_class<app::StateConfigurator_1__Class>(type_info, "fsm", "StateConfigurator");
        }
        inline app::StateConfigurator_1* create() {
            return il2cpp::create_object<app::StateConfigurator_1>(get_class());
        }
    } // namespace StateConfigurator_1
} // namespace app::classes::types
