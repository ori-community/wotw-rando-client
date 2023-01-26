#pragma once
#include <Modloader/app/structs/LowerResBlitTexture.h>
#include <Modloader/app/structs/LowerResBlitTexture__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LowerResBlitTexture {
        inline app::LowerResBlitTexture__Class** type_info() {
            static app::LowerResBlitTexture__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LowerResBlitTexture__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LowerResBlitTexture__Class* get_class() {
            return il2cpp::get_class<app::LowerResBlitTexture__Class>(type_info(), "UnityEngine", "LowerResBlitTexture");
        }
        inline app::LowerResBlitTexture* create() {
            return il2cpp::create_object<app::LowerResBlitTexture>(get_class());
        }
    } // namespace LowerResBlitTexture
} // namespace app::classes::types
