#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InflateCodes {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InflateCodes__Class** type_info;
        inline app::InflateCodes__Class* get_class() {
            return il2cpp::get_class<app::InflateCodes__Class>(type_info, "Ionic.Zlib", "InflateCodes");
        }
        inline app::InflateCodes* create() {
            return il2cpp::create_object<app::InflateCodes>(get_class());
        }
    } // namespace InflateCodes
} // namespace app::classes::types
