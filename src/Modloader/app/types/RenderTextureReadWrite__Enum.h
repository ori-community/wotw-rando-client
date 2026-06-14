#pragma once
#include <Modloader/app/structs/RenderTextureReadWrite__Enum.h>
#include <Modloader/app/structs/RenderTextureReadWrite__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RenderTextureReadWrite__Enum {
        inline app::RenderTextureReadWrite__Enum__Class** type_info() {
            static app::RenderTextureReadWrite__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RenderTextureReadWrite__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RenderTextureReadWrite__Enum__Class* get_class() {
            return il2cpp::get_class<app::RenderTextureReadWrite__Enum__Class>(type_info(), "UnityEngine", "RenderTextureReadWrite");
        }
        inline app::RenderTextureReadWrite__Enum* create() {
            return il2cpp::create_object<app::RenderTextureReadWrite__Enum>(get_class());
        }
    } // namespace RenderTextureReadWrite__Enum
} // namespace app::classes::types
