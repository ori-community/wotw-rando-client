#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpriteAnimatorSerializer {
        namespace {
            inline app::SpriteAnimatorSerializer__Class* type_info_ref = nullptr;
        }
        inline app::SpriteAnimatorSerializer__Class** type_info = &type_info_ref;
        inline app::SpriteAnimatorSerializer__Class* get_class() {
            return il2cpp::get_class<app::SpriteAnimatorSerializer__Class>(type_info, "", "SpriteAnimatorSerializer");
        }
        inline app::SpriteAnimatorSerializer* create() {
            return il2cpp::create_object<app::SpriteAnimatorSerializer>(get_class());
        }
    } // namespace SpriteAnimatorSerializer
} // namespace app::classes::types
