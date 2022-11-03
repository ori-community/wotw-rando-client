#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GlideFeatherAnimator_AtlasAndSpriteTexture__Array {
        namespace {
            inline app::GlideFeatherAnimator_AtlasAndSpriteTexture__Array__Class* type_info_ref = nullptr;
        }
        inline app::GlideFeatherAnimator_AtlasAndSpriteTexture__Array__Class** type_info = &type_info_ref;
        inline app::GlideFeatherAnimator_AtlasAndSpriteTexture__Array__Class* get_class() {
            return il2cpp::get_class<app::GlideFeatherAnimator_AtlasAndSpriteTexture__Array__Class>(type_info, "", "GlideFeatherAnimator+AtlasAndSpriteTexture[]");
        }
        inline app::GlideFeatherAnimator_AtlasAndSpriteTexture__Array* create() {
            return il2cpp::create_object<app::GlideFeatherAnimator_AtlasAndSpriteTexture__Array>(get_class());
        }
    } // namespace GlideFeatherAnimator_AtlasAndSpriteTexture__Array
} // namespace app::classes::types
