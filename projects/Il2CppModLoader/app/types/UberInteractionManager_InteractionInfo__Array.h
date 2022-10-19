#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberInteractionManager_InteractionInfo__Array {
        inline app::UberInteractionManager_InteractionInfo__Array__Class** type_info = (app::UberInteractionManager_InteractionInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x04775FB8));
        inline app::UberInteractionManager_InteractionInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::UberInteractionManager_InteractionInfo__Array__Class>(type_info, "", "UberInteractionManager+InteractionInfo[]");
        }
        inline app::UberInteractionManager_InteractionInfo__Array* create() {
            return il2cpp::create_object<app::UberInteractionManager_InteractionInfo__Array>(get_class());
        }
    } // namespace UberInteractionManager_InteractionInfo__Array
} // namespace app::classes::types
