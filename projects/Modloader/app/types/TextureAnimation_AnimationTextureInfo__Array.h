#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TextureAnimation_AnimationTextureInfo__Array {
        namespace {
            inline app::TextureAnimation_AnimationTextureInfo__Array__Class* type_info_ref = nullptr;
        }
        inline app::TextureAnimation_AnimationTextureInfo__Array__Class** type_info = &type_info_ref;
        inline app::TextureAnimation_AnimationTextureInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::TextureAnimation_AnimationTextureInfo__Array__Class>(type_info, "", "TextureAnimation+AnimationTextureInfo[]");
        }
        inline app::TextureAnimation_AnimationTextureInfo__Array* create() {
            return il2cpp::create_object<app::TextureAnimation_AnimationTextureInfo__Array>(get_class());
        }
    } // namespace TextureAnimation_AnimationTextureInfo__Array
} // namespace app::classes::types
