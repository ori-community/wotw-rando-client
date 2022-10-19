#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScenesManagerBehaviourExplicit {
        inline app::ScenesManagerBehaviourExplicit__Class** type_info = (app::ScenesManagerBehaviourExplicit__Class**)(modloader::win::memory::resolve_rva(0x0475A1F0));
        inline app::ScenesManagerBehaviourExplicit__Class* get_class() {
            return il2cpp::get_class<app::ScenesManagerBehaviourExplicit__Class>(type_info, "", "ScenesManagerBehaviourExplicit");
        }
        inline app::ScenesManagerBehaviourExplicit* create() {
            return il2cpp::create_object<app::ScenesManagerBehaviourExplicit>(get_class());
        }
    } // namespace ScenesManagerBehaviourExplicit
} // namespace app::classes::types
