#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FastEncoderStatics {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FastEncoderStatics__Class** type_info;
        inline app::FastEncoderStatics__Class* get_class() {
            return il2cpp::get_class<app::FastEncoderStatics__Class>(type_info, "Unity.IO.Compression", "FastEncoderStatics");
        }
        inline app::FastEncoderStatics* create() {
            return il2cpp::create_object<app::FastEncoderStatics>(get_class());
        }
    } // namespace FastEncoderStatics
} // namespace app::classes::types
