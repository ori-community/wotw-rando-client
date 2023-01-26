#pragma once
#include <Modloader/app/structs/SpriteAnimatorCondition_SpriteAnimatorMode__Enum.h>
#include <Modloader/app/structs/SpriteAnimatorCondition_SpriteAnimatorMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpriteAnimatorCondition_SpriteAnimatorMode__Enum {
        inline app::SpriteAnimatorCondition_SpriteAnimatorMode__Enum__Class** type_info() {
            static app::SpriteAnimatorCondition_SpriteAnimatorMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpriteAnimatorCondition_SpriteAnimatorMode__Enum__Class**)(modloader::win::memory::resolve_rva(0x04738268));
            }
            return cache;
        }
        inline app::SpriteAnimatorCondition_SpriteAnimatorMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SpriteAnimatorCondition_SpriteAnimatorMode__Enum__Class>(type_info(), "", "SpriteAnimatorCondition", "SpriteAnimatorMode");
        }
        inline app::SpriteAnimatorCondition_SpriteAnimatorMode__Enum* create() {
            return il2cpp::create_object<app::SpriteAnimatorCondition_SpriteAnimatorMode__Enum>(get_class());
        }
    } // namespace SpriteAnimatorCondition_SpriteAnimatorMode__Enum
} // namespace app::classes::types
