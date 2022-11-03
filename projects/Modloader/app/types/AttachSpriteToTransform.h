#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AttachSpriteToTransform {
        namespace {
            inline app::AttachSpriteToTransform__Class* type_info_ref = nullptr;
        }
        inline app::AttachSpriteToTransform__Class** type_info = &type_info_ref;
        inline app::AttachSpriteToTransform__Class* get_class() {
            return il2cpp::get_class<app::AttachSpriteToTransform__Class>(type_info, "", "AttachSpriteToTransform");
        }
        inline app::AttachSpriteToTransform* create() {
            return il2cpp::create_object<app::AttachSpriteToTransform>(get_class());
        }
    } // namespace AttachSpriteToTransform
} // namespace app::classes::types
