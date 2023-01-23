#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpriteAnimatorWithTransitions__Class.h>
#include <Modloader/app/structs/SpriteAnimatorWithTransitions.h>

namespace app::classes::types {
    namespace SpriteAnimatorWithTransitions {
        namespace {
            inline app::SpriteAnimatorWithTransitions__Class* type_info_ref = nullptr;
        }
        inline app::SpriteAnimatorWithTransitions__Class** type_info = &type_info_ref;
        inline app::SpriteAnimatorWithTransitions__Class* get_class() {
            return il2cpp::get_class<app::SpriteAnimatorWithTransitions__Class>(type_info, "", "SpriteAnimatorWithTransitions");
        }
        inline app::SpriteAnimatorWithTransitions* create() {
            return il2cpp::create_object<app::SpriteAnimatorWithTransitions>(get_class());
        }
    } // namespace SpriteAnimatorWithTransitions
} // namespace app::classes::types
