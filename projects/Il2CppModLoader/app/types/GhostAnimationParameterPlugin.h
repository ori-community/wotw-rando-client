#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GhostAnimationParameterPlugin {
        inline app::GhostAnimationParameterPlugin__Class** type_info = (app::GhostAnimationParameterPlugin__Class**)(modloader::win::memory::resolve_rva(0x04737A10));
        inline app::GhostAnimationParameterPlugin__Class* get_class() {
            return il2cpp::get_class<app::GhostAnimationParameterPlugin__Class>(type_info, "", "GhostAnimationParameterPlugin");
        }
        inline app::GhostAnimationParameterPlugin* create() {
            return il2cpp::create_object<app::GhostAnimationParameterPlugin>(get_class());
        }
    } // namespace GhostAnimationParameterPlugin
} // namespace app::classes::types
