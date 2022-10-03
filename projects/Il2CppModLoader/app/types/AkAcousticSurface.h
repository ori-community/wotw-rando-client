#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkAcousticSurface {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkAcousticSurface__Class** type_info;
        inline app::AkAcousticSurface__Class* get_class() {
            return il2cpp::get_class<app::AkAcousticSurface__Class>(type_info, "", "AkAcousticSurface");
        }
        inline app::AkAcousticSurface* create() {
            return il2cpp::create_object<app::AkAcousticSurface>(get_class());
        }
    } // namespace AkAcousticSurface
} // namespace app::classes::types
