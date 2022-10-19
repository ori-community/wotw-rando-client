#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpriteAnimatorCondition_SpriteAnimatorMode__Enum {
        inline app::SpriteAnimatorCondition_SpriteAnimatorMode__Enum__Class** type_info = (app::SpriteAnimatorCondition_SpriteAnimatorMode__Enum__Class**)(modloader::win::memory::resolve_rva(0x04738268));
        inline app::SpriteAnimatorCondition_SpriteAnimatorMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SpriteAnimatorCondition_SpriteAnimatorMode__Enum__Class>(type_info, "", "SpriteAnimatorCondition", "SpriteAnimatorMode");
        }
        inline app::SpriteAnimatorCondition_SpriteAnimatorMode__Enum* create() {
            return il2cpp::create_object<app::SpriteAnimatorCondition_SpriteAnimatorMode__Enum>(get_class());
        }
    } // namespace SpriteAnimatorCondition_SpriteAnimatorMode__Enum
} // namespace app::classes::types
