#pragma once
#include <Modloader/app/structs/CharacterAnimationStateBase.h>
#include <Modloader/app/structs/CharacterAnimationStateBase__Array.h>
#include <Modloader/app/structs/CharacterAnimationStateBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterAnimationStateBase {
        inline app::CharacterAnimationStateBase__Class** type_info() {
            static app::CharacterAnimationStateBase__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterAnimationStateBase__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterAnimationStateBase__Class* get_class() {
            return il2cpp::get_class<app::CharacterAnimationStateBase__Class>(type_info(), "", "CharacterAnimationStateBase");
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
