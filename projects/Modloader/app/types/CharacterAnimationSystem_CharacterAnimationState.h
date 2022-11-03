#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CharacterAnimationSystem_CharacterAnimationState {
        inline app::CharacterAnimationSystem_CharacterAnimationState__Class** type_info = (app::CharacterAnimationSystem_CharacterAnimationState__Class**)(modloader::win::memory::resolve_rva(0x04714C50));
        inline app::CharacterAnimationSystem_CharacterAnimationState__Class* get_class() {
            return il2cpp::get_nested_class<app::CharacterAnimationSystem_CharacterAnimationState__Class>(type_info, "", "CharacterAnimationSystem", "CharacterAnimationState");
        }
        inline app::CharacterAnimationSystem_CharacterAnimationState* create() {
            return il2cpp::create_object<app::CharacterAnimationSystem_CharacterAnimationState>(get_class());
        }
        inline app::CharacterAnimationSystem_CharacterAnimationState__Array* create_array(int size) {
            return il2cpp::array_new<app::CharacterAnimationSystem_CharacterAnimationState__Array>(get_class(), size);
        }
        inline app::CharacterAnimationSystem_CharacterAnimationState__Array* create_array(const std::vector<app::CharacterAnimationSystem_CharacterAnimationState*>& items) {
            return il2cpp::array_new<app::CharacterAnimationSystem_CharacterAnimationState__Array>(get_class(), items);
        }
    } // namespace CharacterAnimationSystem_CharacterAnimationState
} // namespace app::classes::types
