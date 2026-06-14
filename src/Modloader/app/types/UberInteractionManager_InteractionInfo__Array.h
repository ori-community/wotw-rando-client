#pragma once
#include <Modloader/app/structs/UberInteractionManager_InteractionInfo__Array.h>
#include <Modloader/app/structs/UberInteractionManager_InteractionInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberInteractionManager_InteractionInfo__Array {
        inline app::UberInteractionManager_InteractionInfo__Array__Class** type_info() {
            static app::UberInteractionManager_InteractionInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberInteractionManager_InteractionInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x04775FB8));
            }
            return cache;
        }
        inline app::UberInteractionManager_InteractionInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::UberInteractionManager_InteractionInfo__Array__Class>(type_info(), "", "UberInteractionManager+InteractionInfo[]");
        }
        inline app::UberInteractionManager_InteractionInfo__Array* create() {
            return il2cpp::create_object<app::UberInteractionManager_InteractionInfo__Array>(get_class());
        }
    } // namespace UberInteractionManager_InteractionInfo__Array
} // namespace app::classes::types
