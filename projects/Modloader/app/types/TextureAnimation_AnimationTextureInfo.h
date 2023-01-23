#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TextureAnimation_AnimationTextureInfo__Class.h>
#include <Modloader/app/structs/TextureAnimation_AnimationTextureInfo.h>
#include <Modloader/app/structs/TextureAnimation_AnimationTextureInfo__Boxed.h>
#include <Modloader/app/structs/TextureAnimation_AnimationTextureInfo__Array.h>

namespace app::classes::types {
    namespace TextureAnimation_AnimationTextureInfo {
        namespace {
            inline app::TextureAnimation_AnimationTextureInfo__Class* type_info_ref = nullptr;
        }
        inline app::TextureAnimation_AnimationTextureInfo__Class** type_info = &type_info_ref;
        inline app::TextureAnimation_AnimationTextureInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::TextureAnimation_AnimationTextureInfo__Class>(type_info, "", "TextureAnimation", "AnimationTextureInfo");
        }
        inline app::TextureAnimation_AnimationTextureInfo* create() {
            return il2cpp::create_object<app::TextureAnimation_AnimationTextureInfo>(get_class());
        }
        inline app::TextureAnimation_AnimationTextureInfo__Boxed* box(app::TextureAnimation_AnimationTextureInfo value) {
            return il2cpp::box_value<app::TextureAnimation_AnimationTextureInfo__Boxed>(get_class(), value);
        }
        inline app::TextureAnimation_AnimationTextureInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::TextureAnimation_AnimationTextureInfo__Array>(get_class(), size);
        }
        inline app::TextureAnimation_AnimationTextureInfo__Array* create_array(const std::vector<app::TextureAnimation_AnimationTextureInfo>& items) {
            return il2cpp::array_new<app::TextureAnimation_AnimationTextureInfo__Array>(get_class(), items);
        }
    } // namespace TextureAnimation_AnimationTextureInfo
} // namespace app::classes::types
