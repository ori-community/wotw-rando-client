#pragma once
#include <Modloader/app/structs/StateConfigurator.h>
#include <Modloader/app/structs/StateConfigurator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StateConfigurator {
        inline app::StateConfigurator__Class** type_info() {
            static app::StateConfigurator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StateConfigurator__Class**)(modloader::win::memory::resolve_rva(0x04726060));
            }
            return cache;
        }
        inline app::StateConfigurator__Class* get_class() {
            return il2cpp::get_class<app::StateConfigurator__Class>(type_info(), "Moon.InteractionGraph", "StateConfigurator");
        }
        inline app::StateConfigurator* create() {
            return il2cpp::create_object<app::StateConfigurator>(get_class());
        }
    } // namespace StateConfigurator
} // namespace app::classes::types
