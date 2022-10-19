#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FastEncoderStatics {
        inline app::FastEncoderStatics__Class** type_info = (app::FastEncoderStatics__Class**)(modloader::win::memory::resolve_rva(0x04784C18));
        inline app::FastEncoderStatics__Class* get_class() {
            return il2cpp::get_class<app::FastEncoderStatics__Class>(type_info, "Unity.IO.Compression", "FastEncoderStatics");
        }
        inline app::FastEncoderStatics* create() {
            return il2cpp::create_object<app::FastEncoderStatics>(get_class());
        }
    } // namespace FastEncoderStatics
} // namespace app::classes::types
