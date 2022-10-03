#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkTransform {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkTransform__Class** type_info;
        inline app::AkTransform__Class* get_class() {
            return il2cpp::get_class<app::AkTransform__Class>(type_info, "", "AkTransform");
        }
        inline app::AkTransform* create() {
            return il2cpp::create_object<app::AkTransform>(get_class());
        }
    } // namespace AkTransform
} // namespace app::classes::types
