#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AVProWindowsMediaFormatConverter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AVProWindowsMediaFormatConverter__Class** type_info;
        inline app::AVProWindowsMediaFormatConverter__Class* get_class() {
            return il2cpp::get_class<app::AVProWindowsMediaFormatConverter__Class>(type_info, "", "AVProWindowsMediaFormatConverter");
        }
        inline app::AVProWindowsMediaFormatConverter* create() {
            return il2cpp::create_object<app::AVProWindowsMediaFormatConverter>(get_class());
        }
    } // namespace AVProWindowsMediaFormatConverter
} // namespace app::classes::types
