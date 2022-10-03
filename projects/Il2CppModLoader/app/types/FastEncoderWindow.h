#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FastEncoderWindow {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FastEncoderWindow__Class** type_info;
        inline app::FastEncoderWindow__Class* get_class() {
            return il2cpp::get_class<app::FastEncoderWindow__Class>(type_info, "Unity.IO.Compression", "FastEncoderWindow");
        }
        inline app::FastEncoderWindow* create() {
            return il2cpp::create_object<app::FastEncoderWindow>(get_class());
        }
    } // namespace FastEncoderWindow
} // namespace app::classes::types
