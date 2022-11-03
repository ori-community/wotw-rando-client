#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CharacterAnimationStateBase {
        namespace {
            inline app::CharacterAnimationStateBase__Class* type_info_ref = nullptr;
        }
        inline app::CharacterAnimationStateBase__Class** type_info = &type_info_ref;
        inline app::CharacterAnimationStateBase__Class* get_class() {
            return il2cpp::get_class<app::CharacterAnimationStateBase__Class>(type_info, "", "CharacterAnimationStateBase");
        }
        inline app::CharacterAnimationStateBase* create() {
            return il2cpp::create_object<app::CharacterAnimationStateBase>(get_class());
        }
        inline app::CharacterAnimationStateBase__Array* create_array(int size) {
            return il2cpp::array_new<app::CharacterAnimationStateBase__Array>(get_class(), size);
        }
        inline app::CharacterAnimationStateBase__Array* create_array(const std::vector<app::CharacterAnimationStateBase*>& items) {
            return il2cpp::array_new<app::CharacterAnimationStateBase__Array>(get_class(), items);
        }
    } // namespace CharacterAnimationStateBase
} // namespace app::classes::types
