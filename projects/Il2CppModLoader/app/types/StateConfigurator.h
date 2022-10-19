#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StateConfigurator {
        inline app::StateConfigurator__Class** type_info = (app::StateConfigurator__Class**)(modloader::win::memory::resolve_rva(0x04726060));
        inline app::StateConfigurator__Class* get_class() {
            return il2cpp::get_class<app::StateConfigurator__Class>(type_info, "Moon.InteractionGraph", "StateConfigurator");
        }
        inline app::StateConfigurator* create() {
            return il2cpp::create_object<app::StateConfigurator>(get_class());
        }
    } // namespace StateConfigurator
} // namespace app::classes::types
