#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_AVProWindowsMediaFormatConverter {
        inline app::ShaderID_AVProWindowsMediaFormatConverter__Class** type_info = (app::ShaderID_AVProWindowsMediaFormatConverter__Class**)(modloader::win::memory::resolve_rva(0x047080B8));
        inline app::ShaderID_AVProWindowsMediaFormatConverter__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_AVProWindowsMediaFormatConverter__Class>(type_info, "", "ShaderID_AVProWindowsMediaFormatConverter");
        }
        inline app::ShaderID_AVProWindowsMediaFormatConverter* create() {
            return il2cpp::create_object<app::ShaderID_AVProWindowsMediaFormatConverter>(get_class());
        }
    } // namespace ShaderID_AVProWindowsMediaFormatConverter
} // namespace app::classes::types
