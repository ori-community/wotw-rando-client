#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinNaruComboAnimator_AtlasAndSpriteTexture__Array {
        namespace {
            inline app::SeinNaruComboAnimator_AtlasAndSpriteTexture__Array__Class* type_info_ref = nullptr;
        }
        inline app::SeinNaruComboAnimator_AtlasAndSpriteTexture__Array__Class** type_info = &type_info_ref;
        inline app::SeinNaruComboAnimator_AtlasAndSpriteTexture__Array__Class* get_class() {
            return il2cpp::get_class<app::SeinNaruComboAnimator_AtlasAndSpriteTexture__Array__Class>(type_info, "", "SeinNaruComboAnimator+AtlasAndSpriteTexture[]");
        }
        inline app::SeinNaruComboAnimator_AtlasAndSpriteTexture__Array* create() {
            return il2cpp::create_object<app::SeinNaruComboAnimator_AtlasAndSpriteTexture__Array>(get_class());
        }
    } // namespace SeinNaruComboAnimator_AtlasAndSpriteTexture__Array
} // namespace app::classes::types
