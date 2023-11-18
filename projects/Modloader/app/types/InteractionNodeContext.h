#pragma once
#include <Modloader/app/structs/InteractionNodeContext.h>
#include <Modloader/app/structs/InteractionNodeContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InteractionNodeContext {
        inline app::InteractionNodeContext__Class** type_info() {
            static app::InteractionNodeContext__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InteractionNodeContext__Class**)(modloader::win::memory::resolve_rva(0x047172F0));
            }
            return cache;
        }
        inline app::InteractionNodeContext__Class* get_class() {
            return il2cpp::get_class<app::InteractionNodeContext__Class>(type_info(), "Moon.InteractionGraph", "InteractionNodeContext");
        }
        inline app::InteractionNodeContext* create() {
            return il2cpp::create_object<app::InteractionNodeContext>(get_class());
        }
    } // namespace InteractionNodeContext
} // namespace app::classes::types
