#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AnimationCharacterAttribute__Class.h>
#include <Modloader/app/structs/AnimationCharacterAttribute.h>

namespace app::classes::types {
    namespace AnimationCharacterAttribute {
        namespace {
            inline app::AnimationCharacterAttribute__Class* type_info_ref = nullptr;
        }
        inline app::AnimationCharacterAttribute__Class** type_info = &type_info_ref;
        inline app::AnimationCharacterAttribute__Class* get_class() {
            return il2cpp::get_class<app::AnimationCharacterAttribute__Class>(type_info, "Moon", "AnimationCharacterAttribute");
        }
        inline app::AnimationCharacterAttribute* create() {
            return il2cpp::create_object<app::AnimationCharacterAttribute>(get_class());
        }
    } // namespace AnimationCharacterAttribute
} // namespace app::classes::types
