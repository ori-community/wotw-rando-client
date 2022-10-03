#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XboxOneDVR {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XboxOneDVR__Class** type_info;
        inline app::XboxOneDVR__Class* get_class() {
            return il2cpp::get_class<app::XboxOneDVR__Class>(type_info, "", "XboxOneDVR");
        }
        inline app::XboxOneDVR* create() {
            return il2cpp::create_object<app::XboxOneDVR>(get_class());
        }
    } // namespace XboxOneDVR
} // namespace app::classes::types
