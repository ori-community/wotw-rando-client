#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpriteAnimatorAction_PlayMode__Enum {
        namespace {
            inline app::SpriteAnimatorAction_PlayMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SpriteAnimatorAction_PlayMode__Enum__Class** type_info = &type_info_ref;
        inline app::SpriteAnimatorAction_PlayMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SpriteAnimatorAction_PlayMode__Enum__Class>(type_info, "", "SpriteAnimatorAction", "PlayMode");
        }
        inline app::SpriteAnimatorAction_PlayMode__Enum* create() {
            return il2cpp::create_object<app::SpriteAnimatorAction_PlayMode__Enum>(get_class());
        }
    } // namespace SpriteAnimatorAction_PlayMode__Enum
} // namespace app::classes::types
