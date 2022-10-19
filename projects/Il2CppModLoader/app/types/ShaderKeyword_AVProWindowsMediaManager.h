#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderKeyword_AVProWindowsMediaManager {
        inline app::ShaderKeyword_AVProWindowsMediaManager__Class** type_info = (app::ShaderKeyword_AVProWindowsMediaManager__Class**)(modloader::win::memory::resolve_rva(0x0471E248));
        inline app::ShaderKeyword_AVProWindowsMediaManager__Class* get_class() {
            return il2cpp::get_class<app::ShaderKeyword_AVProWindowsMediaManager__Class>(type_info, "", "ShaderKeyword_AVProWindowsMediaManager");
        }
        inline app::ShaderKeyword_AVProWindowsMediaManager* create() {
            return il2cpp::create_object<app::ShaderKeyword_AVProWindowsMediaManager>(get_class());
        }
    } // namespace ShaderKeyword_AVProWindowsMediaManager
} // namespace app::classes::types
