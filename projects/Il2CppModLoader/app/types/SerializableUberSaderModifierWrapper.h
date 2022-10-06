#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SerializableUberSaderModifierWrapper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SerializableUberSaderModifierWrapper__Class** type_info;
        inline app::SerializableUberSaderModifierWrapper__Class* get_class() {
            return il2cpp::get_class<app::SerializableUberSaderModifierWrapper__Class>(type_info, "Moon.ArtOptimization", "SerializableUberSaderModifierWrapper");
        }
        inline app::SerializableUberSaderModifierWrapper* create() {
            return il2cpp::create_object<app::SerializableUberSaderModifierWrapper>(get_class());
        }
        inline app::SerializableUberSaderModifierWrapper__Array* create_array(int size) {
            return il2cpp::array_new<app::SerializableUberSaderModifierWrapper__Array>(get_class(), size);
        }
        inline app::SerializableUberSaderModifierWrapper__Array* create_array(const std::vector<app::SerializableUberSaderModifierWrapper*>& items) {
            return il2cpp::array_new<app::SerializableUberSaderModifierWrapper__Array>(get_class(), items);
        }
    } // namespace SerializableUberSaderModifierWrapper
} // namespace app::classes::types
