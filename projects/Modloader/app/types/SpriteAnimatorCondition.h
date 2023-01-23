#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpriteAnimatorCondition__Class.h>
#include <Modloader/app/structs/SpriteAnimatorCondition.h>

namespace app::classes::types {
    namespace SpriteAnimatorCondition {
        namespace {
            inline app::SpriteAnimatorCondition__Class* type_info_ref = nullptr;
        }
        inline app::SpriteAnimatorCondition__Class** type_info = &type_info_ref;
        inline app::SpriteAnimatorCondition__Class* get_class() {
            return il2cpp::get_class<app::SpriteAnimatorCondition__Class>(type_info, "", "SpriteAnimatorCondition");
        }
        inline app::SpriteAnimatorCondition* create() {
            return il2cpp::create_object<app::SpriteAnimatorCondition>(get_class());
        }
    } // namespace SpriteAnimatorCondition
} // namespace app::classes::types
