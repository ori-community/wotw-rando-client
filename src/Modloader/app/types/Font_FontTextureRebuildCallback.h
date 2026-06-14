#pragma once
#include <Modloader/app/structs/Font_FontTextureRebuildCallback.h>
#include <Modloader/app/structs/Font_FontTextureRebuildCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Font_FontTextureRebuildCallback {
        inline app::Font_FontTextureRebuildCallback__Class** type_info() {
            static app::Font_FontTextureRebuildCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Font_FontTextureRebuildCallback__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Font_FontTextureRebuildCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::Font_FontTextureRebuildCallback__Class>(type_info(), "UnityEngine", "Font", "FontTextureRebuildCallback");
        }
        inline app::Font_FontTextureRebuildCallback* create() {
            return il2cpp::create_object<app::Font_FontTextureRebuildCallback>(get_class());
        }
    } // namespace Font_FontTextureRebuildCallback
} // namespace app::classes::types
