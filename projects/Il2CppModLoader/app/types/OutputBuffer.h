#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OutputBuffer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OutputBuffer__Class** type_info;
        inline app::OutputBuffer__Class* get_class() {
            return il2cpp::get_class<app::OutputBuffer__Class>(type_info, "Unity.IO.Compression", "OutputBuffer");
        }
        inline app::OutputBuffer* create() {
            return il2cpp::create_object<app::OutputBuffer>(get_class());
        }
    } // namespace OutputBuffer
} // namespace app::classes::types
