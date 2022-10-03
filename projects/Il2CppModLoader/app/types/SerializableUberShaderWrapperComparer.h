#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SerializableUberShaderWrapperComparer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SerializableUberShaderWrapperComparer__Class** type_info;
        inline app::SerializableUberShaderWrapperComparer__Class* get_class() {
            return il2cpp::get_class<app::SerializableUberShaderWrapperComparer__Class>(type_info, "Moon.ArtOptimization", "SerializableUberShaderWrapperComparer");
        }
        inline app::SerializableUberShaderWrapperComparer* create() {
            return il2cpp::create_object<app::SerializableUberShaderWrapperComparer>(get_class());
        }
    } // namespace SerializableUberShaderWrapperComparer
} // namespace app::classes::types
