#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NumberFormatInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NumberFormatInfo__Class** type_info;
        inline app::NumberFormatInfo__Class* get_class() {
            return il2cpp::get_class<app::NumberFormatInfo__Class>(type_info, "System.Globalization", "NumberFormatInfo");
        }
        inline app::NumberFormatInfo* create() {
            return il2cpp::create_object<app::NumberFormatInfo>(get_class());
        }
    } // namespace NumberFormatInfo
} // namespace app::classes::types
