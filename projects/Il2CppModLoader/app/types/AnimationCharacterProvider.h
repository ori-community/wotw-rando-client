#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimationCharacterProvider {
        inline app::AnimationCharacterProvider__Class** type_info = (app::AnimationCharacterProvider__Class**)(modloader::win::memory::resolve_rva(0x04780960));
        inline app::AnimationCharacterProvider__Class* get_class() {
            return il2cpp::get_class<app::AnimationCharacterProvider__Class>(type_info, "", "AnimationCharacterProvider");
        }
        inline app::AnimationCharacterProvider* create() {
            return il2cpp::create_object<app::AnimationCharacterProvider>(get_class());
        }
    } // namespace AnimationCharacterProvider
} // namespace app::classes::types
