#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkObstructionOcclusionValues {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkObstructionOcclusionValues__Class** type_info;
        inline app::AkObstructionOcclusionValues__Class* get_class() {
            return il2cpp::get_class<app::AkObstructionOcclusionValues__Class>(type_info, "", "AkObstructionOcclusionValues");
        }
        inline app::AkObstructionOcclusionValues* create() {
            return il2cpp::create_object<app::AkObstructionOcclusionValues>(get_class());
        }
    } // namespace AkObstructionOcclusionValues
} // namespace app::classes::types
