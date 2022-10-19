#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GZipDecoder {
        inline app::GZipDecoder__Class** type_info = (app::GZipDecoder__Class**)(modloader::win::memory::resolve_rva(0x0478F360));
        inline app::GZipDecoder__Class* get_class() {
            return il2cpp::get_class<app::GZipDecoder__Class>(type_info, "Unity.IO.Compression", "GZipDecoder");
        }
        inline app::GZipDecoder* create() {
            return il2cpp::create_object<app::GZipDecoder>(get_class());
        }
    } // namespace GZipDecoder
} // namespace app::classes::types
