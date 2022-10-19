#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MaterialBasedHornBugMovementEffects__Array {
        inline app::MaterialBasedHornBugMovementEffects__Array__Class** type_info = (app::MaterialBasedHornBugMovementEffects__Array__Class**)(modloader::win::memory::resolve_rva(0x0473DAE0));
        inline app::MaterialBasedHornBugMovementEffects__Array__Class* get_class() {
            return il2cpp::get_class<app::MaterialBasedHornBugMovementEffects__Array__Class>(type_info, "", "MaterialBasedHornBugMovementEffects[]");
        }
        inline app::MaterialBasedHornBugMovementEffects__Array* create() {
            return il2cpp::create_object<app::MaterialBasedHornBugMovementEffects__Array>(get_class());
        }
    } // namespace MaterialBasedHornBugMovementEffects__Array
} // namespace app::classes::types
