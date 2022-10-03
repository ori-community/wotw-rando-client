#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LowerResBlitTexture {
        namespace {
            app::LowerResBlitTexture__Class* type_info_ref = nullptr;
        }
        app::LowerResBlitTexture__Class** type_info = &type_info_ref;
        inline app::LowerResBlitTexture__Class* get_class() {
            return il2cpp::get_class<app::LowerResBlitTexture__Class>(type_info, "UnityEngine", "LowerResBlitTexture");
        }
        inline app::LowerResBlitTexture* create() {
            return il2cpp::create_object<app::LowerResBlitTexture>(get_class());
        }
    } // namespace LowerResBlitTexture
} // namespace app::classes::types
