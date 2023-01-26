#pragma once
#include <Modloader/app/structs/AttachSpriteToTransform.h>
#include <Modloader/app/structs/AttachSpriteToTransform__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AttachSpriteToTransform {
        inline app::AttachSpriteToTransform__Class** type_info() {
            static app::AttachSpriteToTransform__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AttachSpriteToTransform__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AttachSpriteToTransform__Class* get_class() {
            return il2cpp::get_class<app::AttachSpriteToTransform__Class>(type_info(), "", "AttachSpriteToTransform");
        }
        inline app::AttachSpriteToTransform* create() {
            return il2cpp::create_object<app::AttachSpriteToTransform>(get_class());
        }
    } // namespace AttachSpriteToTransform
} // namespace app::classes::types
