#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberInteractionManager_ExplosionApplication__Array {
        inline app::UberInteractionManager_ExplosionApplication__Array__Class** type_info = (app::UberInteractionManager_ExplosionApplication__Array__Class**)(modloader::win::memory::resolve_rva(0x04705FE0));
        inline app::UberInteractionManager_ExplosionApplication__Array__Class* get_class() {
            return il2cpp::get_class<app::UberInteractionManager_ExplosionApplication__Array__Class>(type_info, "", "UberInteractionManager+ExplosionApplication[]");
        }
        inline app::UberInteractionManager_ExplosionApplication__Array* create() {
            return il2cpp::create_object<app::UberInteractionManager_ExplosionApplication__Array>(get_class());
        }
    } // namespace UberInteractionManager_ExplosionApplication__Array
} // namespace app::classes::types
