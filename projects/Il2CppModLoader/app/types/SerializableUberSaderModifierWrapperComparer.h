#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SerializableUberSaderModifierWrapperComparer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SerializableUberSaderModifierWrapperComparer__Class** type_info;
        inline app::SerializableUberSaderModifierWrapperComparer__Class* get_class() {
            return il2cpp::get_class<app::SerializableUberSaderModifierWrapperComparer__Class>(type_info, "Moon.ArtOptimization", "SerializableUberSaderModifierWrapperComparer");
        }
        inline app::SerializableUberSaderModifierWrapperComparer* create() {
            return il2cpp::create_object<app::SerializableUberSaderModifierWrapperComparer>(get_class());
        }
    } // namespace SerializableUberSaderModifierWrapperComparer
} // namespace app::classes::types
