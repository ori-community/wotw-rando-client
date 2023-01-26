#pragma once
#include <Modloader/app/structs/GhostAnimationParameterPlugin.h>
#include <Modloader/app/structs/GhostAnimationParameterPlugin__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostAnimationParameterPlugin {
        inline app::GhostAnimationParameterPlugin__Class** type_info() {
            static app::GhostAnimationParameterPlugin__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GhostAnimationParameterPlugin__Class**)(modloader::win::memory::resolve_rva(0x04737A10));
            }
            return cache;
        }
        inline app::GhostAnimationParameterPlugin__Class* get_class() {
            return il2cpp::get_class<app::GhostAnimationParameterPlugin__Class>(type_info(), "", "GhostAnimationParameterPlugin");
        }
        inline app::GhostAnimationParameterPlugin* create() {
            return il2cpp::create_object<app::GhostAnimationParameterPlugin>(get_class());
        }
    } // namespace GhostAnimationParameterPlugin
} // namespace app::classes::types
