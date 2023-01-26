#pragma once
#include <Modloader/app/structs/ContextLevelActivator.h>
#include <Modloader/app/structs/ContextLevelActivator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ContextLevelActivator {
        inline app::ContextLevelActivator__Class** type_info() {
            static app::ContextLevelActivator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ContextLevelActivator__Class**)(modloader::win::memory::resolve_rva(0x0478BF58));
            }
            return cache;
        }
        inline app::ContextLevelActivator__Class* get_class() {
            return il2cpp::get_class<app::ContextLevelActivator__Class>(type_info(), "System.Runtime.Remoting.Activation", "ContextLevelActivator");
        }
        inline app::ContextLevelActivator* create() {
            return il2cpp::create_object<app::ContextLevelActivator>(get_class());
        }
    } // namespace ContextLevelActivator
} // namespace app::classes::types
