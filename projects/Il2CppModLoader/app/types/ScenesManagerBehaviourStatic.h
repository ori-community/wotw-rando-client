#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScenesManagerBehaviourStatic {
        inline app::ScenesManagerBehaviourStatic__Class** type_info = (app::ScenesManagerBehaviourStatic__Class**)(modloader::win::memory::resolve_rva(0x0471AAF8));
        inline app::ScenesManagerBehaviourStatic__Class* get_class() {
            return il2cpp::get_class<app::ScenesManagerBehaviourStatic__Class>(type_info, "", "ScenesManagerBehaviourStatic");
        }
        inline app::ScenesManagerBehaviourStatic* create() {
            return il2cpp::create_object<app::ScenesManagerBehaviourStatic>(get_class());
        }
    } // namespace ScenesManagerBehaviourStatic
} // namespace app::classes::types
