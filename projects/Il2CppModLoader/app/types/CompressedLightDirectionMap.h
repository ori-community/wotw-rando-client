#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CompressedLightDirectionMap {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CompressedLightDirectionMap__Class** type_info;
        inline app::CompressedLightDirectionMap__Class* get_class() {
            return il2cpp::get_class<app::CompressedLightDirectionMap__Class>(type_info, "UberShader", "CompressedLightDirectionMap");
        }
        inline app::CompressedLightDirectionMap* create() {
            return il2cpp::create_object<app::CompressedLightDirectionMap>(get_class());
        }
    } // namespace CompressedLightDirectionMap
} // namespace app::classes::types
